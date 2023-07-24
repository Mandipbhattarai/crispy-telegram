#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float km, m;
    cout << "Enter the length in km ::";
    cin >> km;
    m = km * 1000;
    cout << "The length in m for given " << km << "is: " << m;

    return 0;
}
