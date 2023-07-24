// header files
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <algorithm>

// standard namespace
using namespace std;

// global variables
int bank_amount;

// functions declarations
int withdraw(int);

// main function
int main()
{
    system("cls");
    ios::sync_with_stdio(0);
    cin.tie(0);
    int pin, correct = 1234, money;
    cout << "                           HELLO TO HAWDE BANK LTD. ATM                           " << endl;
    cout << "Enter your ATM pin" << endl;
    cin >> pin;
    if (pin == correct)
    {
        int choice, type_acc;
        cout << "Enter the task you want to perform: " << endl;
        cout << "1. Withdraw Money\n2. Change ATM pin\n3. Check Balance\n4. Settings\n5. Logout" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "You've selected to withdraw money! " << endl;
            cout << "Enter the amount you'd like to withdraw: " << endl;
            cin < < <
                cout << "You've withdrawn Rs." << withdraw(money) << endl;
            break;

        default:
            break;
        }
    }

    int withdraw(int selected_amt)
    {
        int withdrawn_amt;
        selected_amt = selected_amt - withdraw_amt;
        return selected_amt;
    }

    return 0;
}