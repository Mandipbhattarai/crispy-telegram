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
    int n, ans;
    cin >> n;

    ans = facto(n);
    cout << ans << endl;
    return 0;
}