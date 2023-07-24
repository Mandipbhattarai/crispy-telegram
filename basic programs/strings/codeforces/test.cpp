#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, m, d;
        cin >> x >> m >> d;
        if (m * x > x + d)
        {
            cout << x + d << endl;
        }
        else
        {
            cout << m * x << endl;
        }
    }
    return 0;
}
