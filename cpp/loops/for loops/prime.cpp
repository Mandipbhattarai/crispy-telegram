#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,m;
    cin>> n;
    m=n/2;
    for (int i = 0; i < m; i++)
    {
        if (n%i==0)
        {
            cout<<"Not prime";
        }
        else 
        {
            cout<< "Prime";
        }
        
    }
    
    return 0;
}
