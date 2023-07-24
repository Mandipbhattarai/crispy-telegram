// Wap to find factoeial of two numbers
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, fac=1;
    cin>>n;
    for (int i = n; i>0; i--)
    {
       fac=fac*i;
    }
    cout<<fac;
    return 0;
}