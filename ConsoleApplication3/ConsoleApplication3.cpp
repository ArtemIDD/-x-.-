﻿#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    float x = -4.5;
    float y;
    while (x < 4)
    {
        x = x + 0.5;
        y = abs(x);
        cout << x << " " << y << endl;
    }
    return 0;
}
