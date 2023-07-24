#include <iostream>
#include <cmath>
using namespace std;

bool prime(int);

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i < b; i++)
    {
        if (prime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}

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