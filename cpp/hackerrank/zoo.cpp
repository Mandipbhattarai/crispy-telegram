#include <iostream>
using namespace std;

// Function to demonstrate std::string::at
void extractChar_a(string str)
{
    char ch;
 
    // Calculating the length of string
    int l = str.length();
    for (int i = 0; i < l; i++) {
        ch = str.at(i);
       
    }
}

// Driver code
int main()
{
    string x;
    extractChar_a(x);
    return 0;
}
int main()
{
	string x, y;
	cin >> x;
	cin >> y;
	int a, b;
	int count_a = 0, count_b = 0;



	
	for (int i = 0; x[i] != 0; i++)
	{
		count_a++;
	}
	for (int j = 0; y[j] != 0; j++)
	{
		count_b++;
	}
	if (count_b == 2 * count_a)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}