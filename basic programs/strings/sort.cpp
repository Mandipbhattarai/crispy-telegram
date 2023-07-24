#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str = "Mandip Bhattarai";
    sort(str.begin(), str.end());
    cout << str << endl;

    return 0;
}
