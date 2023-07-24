#include <iostream>
using namespace std;

int main() {
    int n,fac=1;
    cin>>n;
if(n<0){
    cout<<"Error";
}
   else if (n==0){
    cout<<"1";
   }
else{
    for( int i=n; i>0; i--){    
   fac= fac*i;
    }     
    cout<< fac;
}
    return 0;
}