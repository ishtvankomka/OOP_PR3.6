#include <iostream>
#include <stdio.h>
#include "D2.hpp"
#include "B2.hpp"

using namespace std;

class D3 : public D2, private B2
{
    int d3;
public:
    D3(int x, int y, int z, int q, int w)
    :D2(y, z, q), B2(w)
    {
        d3 = x;
    }
    void show_D3();
};
