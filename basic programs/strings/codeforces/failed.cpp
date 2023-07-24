#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool prime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int totalPrime(int a, int b)
{
    int k = 0;
    for (int i = a; i <= b; i++)
    {
        if (prime(i))
        {
            k = k + 1;
        }
    }
    return k;
}

int main()
{
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}