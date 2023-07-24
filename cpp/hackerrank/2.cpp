// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    float y, remain;
    cin >> x >> y;
    if (x % 5 == 0)
    {
        remain = y - (x + 0.5);
        fprintf(stdout, "%.2f", remain);
    }
    else if (x % 5 != 0)
    {
        fprintf(stdout, "%.2f", y);
    }
    else
    {
        cout << "Insufficient balance";
    }

    return 0;
}
