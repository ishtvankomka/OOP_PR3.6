#include <iostream>
#include <stdio.h>
using namespace std;

class B1{
    int b1;
public:
    B1()
    : b1(0)
    { }
    B1(int x)
    {
        b1 = x;
    }
    int get_b1() { return b1; };
    void show_B1();
};
