#include <iostream>
using namespace std;

int square(int l);
int cube(int c);

int main()
{
    int l;
    cin >> l;
    square(l);
    cube(l);
    cout << "The area of square is : " << square(l) << " and cube is " << cube(l) << endl;
    return 0;
}

int square(int l)
{
    int are;
    are = l * l;
    return are;
}
int cube(int l)
{
    int are;
    are = l * l * l;
    return are;
}