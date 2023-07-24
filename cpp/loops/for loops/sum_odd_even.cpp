// Program to find sum of odd number and even number
#include <iostream>
using namespace std;

int main()
{
    int number,last, even = 0, odd = 0;
    cin >> number;
while ( number>0)
{
    last=number%10;
    if (last % 2 == 0)
    {
        even += last;
    }
    else
    {
        odd += last;
    }
    number=number/10;

}

    
    cout << even << " " << odd;

    return 0;
}