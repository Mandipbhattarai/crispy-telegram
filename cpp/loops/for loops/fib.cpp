#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, n,c,temp;
    cin>>n;
    a=0; b=1;
    cout<<a<<endl<<b<<endl;
    n=n-2;
    for (int i = 0; i < n; i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }

    return 0;
}
// Input::   10
//Output::    0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

