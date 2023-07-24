#include <iostream>
using namespace std;

int main()
{
    int n, counter = 0;
    cin >> n;
    while (n >= 0)
    {
        counter = counter + n;
        cin >> n;
    }
    cout << counter << endl;
    return 0;
}