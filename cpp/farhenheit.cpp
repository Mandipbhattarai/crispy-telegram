#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int S, E, W,F;
    cin>>S>>E>>W;
    for(int i=S; i<=E;){
        F= (5*(i-32))/9;
      cout<<i<< " "<<F<< endl;
        i+=W;
    }

    return 0;
}