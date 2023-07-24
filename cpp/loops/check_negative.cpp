#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[]={5,3,2,4,5,-5,2,-2};
    int size=8;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<0)
        {
            cout << "Array contains negative value";
            break;
        }
        
    }
    
    return 0;
}