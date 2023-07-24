#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int sum=0,n;
    cout<< "Enter the numbers of natural numbers to find "<< endl;
    cin>> n;
    for (int i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    cout<< sum;
    

    return 0;
}
