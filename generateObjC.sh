#!/bin/sh

# export PATH="~/Desktop/j2objc:$PATH
cd ./src/main/java
j2objc  -use-arc --strip-reflection ./amfibians/ui/wrapper/generated/I_*.java