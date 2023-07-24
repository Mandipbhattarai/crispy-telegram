#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string you want to check repetion" << endl;
    getline(cin, str);
    int max = 0;
    char result;
    int count[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            result = 'a' + i;
        }
    }
    cout << result;

    return 0;
}