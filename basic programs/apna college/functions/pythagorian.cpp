#include <iostream>
#include <cmath>
using namespace std;
int triplet(int a, int b, int c)
{
    int big, mid, small;
    big = max(a, max(b, c));
    if (a == big)
    {
        mid = b;
        small = c;
    }
    else if (b == big)
    {
        mid = a;
        small = c;
    }
    else
    {
        mid = a;
        small = b;
    }

    if ((big * big) == ((mid * mid) + (small * small)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a, b, c, maxx;
    cin >> a >> b >> c;
    maxx = triplet(a, b, c);
    if (maxx == 0)
    {
        cout << "It is not Pythagorian Triplet" << endl;
    }
    else
    {
        cout << "It is a Pythagorian Triplet" << endl;
    }

    return 0;
}
