package amfibians.ui.wrapper;

import java.io.BufferedWriter;
import java.io.IOException;
import java.lang.reflect.Constructor;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.lang.reflect.Parameter;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.Arrays;
import android.widget.TextView;

public class Generator
{

    static String OPT = "-package=";

    String className;
    String pkg;
    Class  cl ;
    BufferedWriter i_w;
    BufferedWriter w_w;

        public
    Generator( String fullClassName, String pkg ) throws Exception
    {
        this.cl = Class.forName( fullClassName);
        this.className = cl.getSimpleName(); this.pkg = pkg;
        i_w = Files.newBufferedWriter( Paths.get("I_"+ className+".java" ) );
        w_w = Files.newBufferedWriter( Paths.get("W_"+ className+".java" ) );



        println(  "package "+pkg+";");
        println( i_w, "public interface I_"+className );
        println( w_w, "public class W_"+className+" implements I_"+className );
        println( "{" );

        println( w_w, "\t" + fullClassName + " obj;" );

        for( Constructor c : cl.getConstructors() )
        {
            print( w_w, "\tpublic W_" + className );
            print( w_w, c.getParameters(), true );
            print( w_w, "{\t obj=new "+fullClassName );
            print( w_w, c.getParameters(), false );
            println( w_w, ";\t}" );
        }

        for( Method m :cl.getDeclaredMethods() )
        {
//            if( !m.isAccessible() )
//                print( "// protected " );
//if( "onConfigurationChanged".equals( m.getName() ))
//    System.out.println( "onConfigurationChanged" );
            print( "\t" );
            if( !Modifier.isPublic( m.getModifiers()) || m.getExceptionTypes().length >0 )
                print( "// " );
            if( m.getExceptionTypes().length >0 )
                print( "throws "+m.getExceptionTypes() );
            if( Modifier.isProtected( m.getModifiers()) )
                print( "protected" );
            if( Modifier.isPrivate( m.getModifiers()) )
                print( "private " );

            if( Modifier.isPublic( m.getModifiers()) )
                print( "public " );

            print( "\t"+ m.getReturnType().getCanonicalName() + " \t" +m.getName() );

            print( i_w, m.getParameters(), true );
            print( w_w, m.getParameters(), true );
            println( i_w, ";" );
            print( w_w,"{\t");
                if( !"void".equals( m.getReturnType().getCanonicalName() ))
                    print( w_w,"return");
                print( w_w,"\tobj."+m.getName() );
            print( w_w, m.getParameters(), false );
            println(w_w,";\t}");
        }
        println( "}" );
        i_w.close();
        w_w.close();
    }

        void
    print( BufferedWriter w, Parameter[] a, boolean printTypes ) throws IOException
    {
        print( w, "( " );
        int i=0;
        for( Parameter p : a )
        {
            if( i++ > 0 )
                print(w, ", " );
            if( printTypes )
                print(w, p.getType().getCanonicalName() );
            print( w,' '+p.getName() );
        }
        print( w, " )" );
    }

        void
    println( BufferedWriter w, String s ) throws IOException
    {
        w.write( s );
        w.write( '\n' );
    }

        void
    println( String s ) throws IOException
    {
        println(i_w, s );
        println(w_w, s );
    }
        void
    print( BufferedWriter w, String s ) throws IOException
    {
        w.write( s );
    }

        void
    print( String s ) throws IOException
    {
        i_w.write( s );
        w_w.write( s );
    }

        static void
    RenderWrapper( String className, String pkg )
    {
        try
        {
            new Generator( className, pkg );

        }catch( Exception e )
        {
            System.out.println( "class not processed:" + className +", "+e.getMessage() );
        }
    }
    public static void main( String[] args )
    {
            final String
        pkg = Arrays.stream(args).filter( a-> a.startsWith( OPT ) ).findAny().orElse(null);
        if( pkg == null )
        {
            System.out.println( "Generates the wrappers for all classes or classes in package listed in CLI. " );
            System.out.println( "The name of wrapper matches the class with I_ and W_ for interface and wrapper respectfully  " );
            System.out.println( "Options:" );
            System.out.println( OPT+"my.app.wrappers" );
            System.out.println( "Sample> java "+OPT+"my.app.wrappers android.widget.TextView android.widget.Button" );
            return;
        }

        Arrays.stream(args)
        .filter( a -> !a.startsWith( "-" ) )
        .forEach( a -> RenderWrapper( a, pkg.substring( OPT.length() ) ) );
    }
}
