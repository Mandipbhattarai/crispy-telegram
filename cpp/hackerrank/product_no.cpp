#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N,ele[N];
    cin>>N;
    int answer=1;
    int power=(pow(10,9) + 7 );
    cout<<power<<endl;
    for (int i = 0; i < N; i++)
    {
        answer = (answer * ele[N]) % power; 
    }
    
    cout<<answer;

    return 0;
}
