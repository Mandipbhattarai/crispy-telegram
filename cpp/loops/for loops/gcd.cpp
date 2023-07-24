#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int n1, n2, gcd, product, lcm,max;
    cout << "Enter first number- ";
    cin >> n1;
    cout << "Enter second number- ";
    cin >> n2;
    product = n1 * n2;
    max = (n1 > n2) ? n1 : n2;
    while (1)
    {
        if(max%n1==0 && max%n2==0){
            lcm= max;
            break;
        }
        ++max;
    }
    
    gcd = product / lcm;
    cout << "The gcd of " << n1 << " and " << n2 << " is " << gcd << endl;

    return 0;
}
