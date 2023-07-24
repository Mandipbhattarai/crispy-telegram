#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int sum=0;
    for (int i = 1; i <= 10; i++)
    {
        sum=sum+i;
    }
    cout<<"The sum of first 10 natural numbers is "<< sum;
    return 0;
}
