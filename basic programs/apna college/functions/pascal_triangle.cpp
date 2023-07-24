// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
#include <iostream>
using namespace std;

int facto(int n)
{
    int fac = 1;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        while (n > 0)
        {
            fac = fac * n;
            n--;
        }
    }
    return fac;
}

int ncr(int i, int j)
{
    int incr;
    incr = facto(i) / (facto(i - j) * facto(j));
    return incr;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ncr(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}