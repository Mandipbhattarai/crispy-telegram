#include <iostream>
using namespace std;

int facto(int a)
{
    int fac = 1;
    while (a >= 1)
    {
        fac *= a;
        a--;
    }
    return fac;
}

int main()
{
    int n, r, ans, top, right, left, left_diff;
    cin >> n >> r;
    left_diff = n - r;
    top = facto(n);
    left = facto(left_diff);
    right = facto(r);
    ans = top / (left * right);
    cout << ans << endl;
    return 0;
}