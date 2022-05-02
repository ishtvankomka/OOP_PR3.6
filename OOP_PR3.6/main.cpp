#include <iostream>
#include <stdio.h>
#include "D3.hpp"

using namespace std;

int main()
{
    B1 b01(100);
    cout << "B1 b01(100);" << endl; cout << "sizeof(B1) = " << sizeof(B1) << endl;
    cout << endl << "Ієрархія класу B1: " << endl;
    b01.show_B1();
    
    B2 b02(200);
    cout << "B2 b02(200);" << endl; cout << "sizeof(B2) = " << sizeof(B2) << endl;
    cout << endl << "Ієрархія класу B2: " << endl;
    b02.show_B2();
    
    D1 d01(102, 101);
    cout << "D1 d01(102, 101);" << endl; cout << "sizeof(D1) = " << sizeof(D1) << endl;
    cout << endl << "Ієрархія класу D1: " << endl;
    d01.show_D1();
    
    D2 d02(103, 102, 101);
    cout << "D2 d02(103, 102, 101);" << endl; cout << "sizeof(D2) = " << sizeof(D2) << endl;
    cout << endl << "Ієрархія класу D2: " << endl;
    d02.show_D2();
    
    D3 d03(105, 104, 103, 102, 101);
    cout << "D3 d03(105, 104, 103, 102, 101);" << endl; cout << "sizeof(D3) = " << sizeof(D3) << endl;
    cout << endl << "Ієрархія класу D3: " << endl;
    d03.show_D3();
}
