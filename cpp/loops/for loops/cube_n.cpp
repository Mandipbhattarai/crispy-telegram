
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int number, times, num;
    cin >> number >> times;
    num=number;
    if (times == 0)
    {
        cout << "1";
    }
    else
    {
        for (int i = 1; i < times; i++)
        {
            num *= number;
        }
        cout << num;
    }

    return 0;
}


// #include<stdio.h>
// #include <math.h>
// int main(int argc, char const *argv[]){
//     printf("Type the Base and Exponent : \n");
//     int b,e; scanf("%d %d",&b,&e);
//     int expo=pow(b,e);
//     printf("%d To The Power %d is %d",b,e,expo);
//     return 0;
// }
