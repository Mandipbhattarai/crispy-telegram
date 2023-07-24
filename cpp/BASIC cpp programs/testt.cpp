#include <iostream>
// C++ program to extract words from
// a string using stringstream
#include <bits/stdc++.h>
using namespace std;
void printWords(string str)
{
    // word variable to store word
    string word;

    // making a string stream
    stringstream iss(str);

    // Read and print each word.
    while (iss >> word)
        cout << word << endl;
}

// Driver code
int main()
{
    string s;
    cin>>s;
    printWords(s);
    return 0;
}