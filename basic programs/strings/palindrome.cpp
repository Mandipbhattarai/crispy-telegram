// WAP to check whether the given number is palindrome or not
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string to check palindrome: ";
    getline(cin, s);
    int low = 0;
    ;
    int high = s.size() - 1;
    int flag = 0;
    while (low < high)
    {
        if (s[low] != s[high])
        {
            flag = 1;
            break;
        }
        low++;
        high--;
    }
    if (flag == 0)
    {
        cout << "The given string is palindrome" << endl;
    }
    else
    {
        cout << "The given string is not palindrome" << endl;
    }

    return 0;
}