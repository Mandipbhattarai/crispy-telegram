#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cout << "Enter the first number to be swapped";
    cin >> a;
    cout << "Enter the second number to be swapped";
    cin >> b;
    c = b;
    b = a;
    a = c;
    cout << "The swapped number is :: " << a<< ","<< b;

    return 0;
}
