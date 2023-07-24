#include <iostream>
using namespace std;

int sum(int a)
{
    int add = 0;
    for (int i = 1; i <= a; i++)
    {
        add = add + i;
    }
    return add;
}

int main()
{
    int n;
    cin >> n;
    int ans = sum(n);
    cout << ans;
    return 0;
}