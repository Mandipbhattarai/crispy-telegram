#include <iostream>
using namespace std;

int main()
{
    int n, r;
    cin >> n;
    int temp = n;
    int arm = 0;
    while (n > 0)
    {
        r = n % 10;
        arm = r * r * r + arm;
        n = n / 10;
    }
    if (arm == temp)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not Armstrong Number" << endl;
    }

    return 0;
}