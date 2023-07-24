#include <iostream>
using namespace std;

void fib(int);

int main()
{
    int n;
    cin >> n;

    fib(n);

    return 0;
}

void fib(int num)
{
    int a = 0, b = 1, c;
    for (int i = 0; i < num; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}