#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "The swapped numbers are: " << a << " " << b << endl;
    return 0;
}