# amfibian-ui-wrapper
generator of wrappers for Android UI elements as java interface for j2objc and its Android implementation 

# setup
* set path to j2objc directory
* Add ~/Library/Android/sdk/platforms/android-23/android.jar into classpath 
  * in IntelliJ Idea: In project structure|modules|dependencies add the android.jar
* set program arguments to  -package=amfibians.ui.wrapper.generated android.widget.TextView
* set working directory to ~/Desktop/Amfibians/amfibian-ui-wrapper/src/main/java/amfibians/ui/wrapper/generated

# generating ObjectiveC 
* execute Generator.java 
* run generateObjC.sh 