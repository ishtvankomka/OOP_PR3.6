#include <iostream>
#include <stdio.h>
#include "D1.hpp"
using namespace std;

class D2 : private D1
{
    int d2;
public:
    D2(int x, int y, int z)
    :D1(y, z)
    {
        d2 = x;
    }
    void show_D2();
};
