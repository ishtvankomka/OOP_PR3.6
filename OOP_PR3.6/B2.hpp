#include <iostream>
#include <stdio.h>
using namespace std;

class B2{
    int b2;
public:
    B2()
    : b2(0)
    { }
    B2(int x)
    {
        b2 = x;
    }
    void show_B2();
};
