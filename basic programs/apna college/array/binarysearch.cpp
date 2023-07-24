//  More effective than Linear Search Method
/*  In this method we assign the start to the 0 element and ending to the last element in this program ie s=0 & e=n
    After this we take the mid value for starting to search
    while the start is less or equal to e a while loop is executed
    if the thing we are searching is found then mid is returned
    if not found and mid > key then we put end value to mid-1
    also if the both condition is not met we make start as mid + 1
    the start is changed if the value of mid < key
*/
#include <iostream>
using namespace std;

int search(int n, int arr[], int key)
{
    int s = 0, e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    cout << search(n, arr, key);
    return 0;
}