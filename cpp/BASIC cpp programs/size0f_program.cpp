#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout << "Size of integer a is :: " << sizeof(a) << endl;

    char b;
    cout << "Size of character b is :: " << sizeof(b) << endl;

    float c;
    cout << "Size of float c is :: " << sizeof(c) << endl;

    double d;
    cout << "Size of double d is :: " << sizeof(d) << endl;

    bool e;
    cout << "Size of bool e is :: " << sizeof(e) << endl;

    short int f;
    long int g;
    cout << "Size of short int is:: " << sizeof(f) << endl;
    cout << "Size of long int is:: " << sizeof(g) << endl;

    return 0;
}
