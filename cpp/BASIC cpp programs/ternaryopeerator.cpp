#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x = 3, y = 4, z;
    z = (x == 3 ? (y == 4 ? 6 : 8) : 0);
    /* Actual working of the ternary operator
    if(x==3){ 
        if(y==4){
            cout<< 6;
        }
        else{
            cout<<8;
        }
    }
    else {
        cout<<0;
    }
    */
    cout << z;
    return 0;
}
