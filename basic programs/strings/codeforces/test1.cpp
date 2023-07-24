#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int countBits(int a)
{
    int b = 0, i = 1, r, count = 0, n;
    while (a > 0)
    {
        r = a % 2;
        a = a / 2;
        b = b + (i * r);
        i = i * 10;
    }
    while (b > 0)
    {
        n = b % 10;
        if (n == 1)
        {
            count = count + 1;
        }
        else
        {
            count = count + 0;
        }
        b = b / 10;
    }

    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << countBits(n);
    return 0;
}