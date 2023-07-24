#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string m = "one", n = "two", o = "three", p = "four", q = "five", r = "six", s = "seven", t = "eight", u = "nine";

    if (a <= 9)
    {
        for (int i = a; i <= b; i++)
        {
            if (i == 1)
            {
                cout << m << endl;
            }
            else if (i == 2)
            {
                cout << n << endl;
            }
            else if (i == 3)
            {
                cout << o << endl;
            }
            else if (i == 4)
            {
                cout << p << endl;
            }
            else if (i == 5)
            {
                cout << q << endl;
            }
            else if (i == 6)
            {
                cout << r << endl;
            }
            else if (i == 7)
            {
                cout << s << endl;
            }
            else if (i == 8)
            {
                cout << t << endl;
            }
            else if (i == 9)
            {
                cout << u << endl;
            }
        }
    }
    if (b > 9)
    {
        for (int j = 10; j <= b; j++)
        {
            if (j % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
    }
    return 0;
}
