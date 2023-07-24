#include <iostream>
using namespace std;

int main() {
    char alpha;
    cout<<"Enter a character to find :: ";
    cin>> alpha;
    if(alpha>='A' && alpha<='Z'){
    cout<<"1";
    }
    else if(alpha >='a' && alpha <='z'){
    cout<<"0";
    }
    else {
    cout<<"-1";
    }
    return 0;
}