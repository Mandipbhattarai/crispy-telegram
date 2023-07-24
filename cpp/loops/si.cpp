// Program to find simple interest for n number of times
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int p, t, count, n;
    float si, r;
    cout << "Enter the number of times to calculate Simple Interest :: ";
    cin >> n;
    count = 1;
    while (count <= n)
    {
        cout << "Enter the principal :: ";
        cin >> p;
        cout << "Enter the rate :: ";
        cin >> r;
        cout << "Enter the time :: ";
        cin >> t;
        si = (p * t * r) / 100;
        cout << "The Simple interest on " << p << " sum of money for " << t << " years, at the rate of " << r << " % per annum is " << si << endl;
        count = count + 1;
    }
    return 0;
}
