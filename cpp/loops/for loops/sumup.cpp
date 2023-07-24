#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int sum=0,n=1;
  for (int i = 1; i <=100; i++)
  {
    sum=sum+n;
    n++;
  }
  
    cout<<sum;
    
    return 0;
}
