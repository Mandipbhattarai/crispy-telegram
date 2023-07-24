// WAP to find whether to allow the user to write integer unless the user inputs 0

#include  <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    do
    {
            cout << "Enter an integer ";
        cin>> n;
    } while (n!=0);
    cout<< "You have terminated the program";
    return 0;
}
