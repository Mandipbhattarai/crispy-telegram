#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double totalsalary, hra, da, pf;
    int basic,allow;
    char alphabet;
    cin >> basic;
    cin >> alphabet;
    hra = 0.2 * basic;
    da = 0.5 * basic;
    pf = 0.11 * basic;
    if (alphabet == 'A')
    {
        allow = 1700;
        totalsalary = basic + hra + da + allow - pf;
    }
    else if (alphabet == 'B')
    {
        allow = 1500;
        totalsalary = basic + hra + da + allow - pf;
    }
    else
    {
        allow = 1300;
        totalsalary = basic + hra + da + allow - pf;
    }
    cout << round(totalsalary);

    return 0;
}