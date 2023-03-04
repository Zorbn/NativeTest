#include <iostream>

#define HL_NAME(n) nativeTest_##n
#include <hl.h>

HL_PRIM void HL_NAME(say_hello)(int amount)
{
    for (int i = 0; i < amount; i++)
    {
        std::cout << "Hello, from nativeTest!\n";
    }
}

DEFINE_PRIM(_VOID, say_hello, _I32);
