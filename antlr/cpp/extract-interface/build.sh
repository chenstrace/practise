mkdir build 
antlr4 -Dlanguage=Cpp Java.g4 
cp Demo.java build
cd build && cmake3 .. && make -j4 && ./extract_interface Demo.java
