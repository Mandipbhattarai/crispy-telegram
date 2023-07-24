#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int principal, time;
    float rate, si;
    cout << "Enter the principal:: ";
    cin >> principal;
    cout << "Enter the rate:: ";
    cin >> rate;
    cout << "Enrer the time ::";
    cin >> time;
    si = (principal * rate * time) / 100;
    cout << "The simple interest is :: " << si;

    return 0;
}
