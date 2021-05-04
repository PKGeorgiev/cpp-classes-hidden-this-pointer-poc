# Description
This project aims to show that instances of a given class share the same code for their methods.
When a member function is called, a hidden pointer named "this" is passed as the first argument so the program knows which instance of that class is working with.
This project is for educational purposes.

More information and helpful articles:
* [The hidden this pointer](https://www.learncpp.com/cpp-tutorial/the-hidden-this-pointer)
* [How to hook *__thiscall* functions](https://tresp4sser.wordpress.com/2012/10/06/how-to-hook-thiscall-functions/)
* [C++ class member function pointer to function pointer](https://stackoverflow.com/a/52427102)
* [How can I call a function that acts like __thiscall, except the caller cleans the stack?](https://reverseengineering.stackexchange.com/q/12608)
* [C++ how to compile __thiscall in MS VC++ 6.0](https://stackoverflow.com/questions/8981018/c-how-to-compile-thiscall-in-ms-vc-6-0)

# Hooking functions
* [*__thiscall* member function hooking](https://guidedhacking.com/threads/thiscall-member-function-hooking.4036/)
* [The *Detours* library](https://github.com/microsoft/Detours)
