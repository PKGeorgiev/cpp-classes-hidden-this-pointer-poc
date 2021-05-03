# cpp-classes-hidden-this-pointer-poc

# Description
This project aims to show that instances of a given class share the same code for their methods.
When a member function is called, a hidden pointer named "this" is passed as the first argument so the program knows which instance of that class is working with.
This project is for educational purposes.

More information and helpful articles:
* [https://www.learncpp.com/cpp-tutorial/the-hidden-this-pointer]()
* [https://tresp4sser.wordpress.com/2012/10/06/how-to-hook-thiscall-functions/]()
* [https://stackoverflow.com/a/52427102]()
* [https://reverseengineering.stackexchange.com/q/12608]()
* [https://stackoverflow.com/questions/8981018/c-how-to-compile-thiscall-in-ms-vc-6-0]()

# Hooking functions
* [https://guidedhacking.com/threads/thiscall-member-function-hooking.4036/]()
* [https://github.com/microsoft/Detours]()
