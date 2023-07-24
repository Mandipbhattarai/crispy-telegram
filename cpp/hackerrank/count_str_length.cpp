#include <iostream>
using namespace std;

int extract_z(string zoo)
{
    char z;
    int length_z = 0;
    // Calcutating the length of a string
    int l = zoo.length();
    for (int i = 0; i < l; i++)
    {
        z = zoo.at(i);
        if (z == 'z')
        {
            length_z++;
        }
        else
        {
            break;  
        }
    }

    return length_z;
}

int extract_o(string zoo)
{
    char o;
    int length_o = 0;
    // Calcutating the length of a string
    int l = zoo.length();
    for (int i = 0; i < l; i++)
    {
        o = zoo.at(i);
        if (o == 'o')
        {
            length_o++;
        }
        else
        {
            break;
        }
    }
cout<<length_o;
    // return length_o;
}

int main()
{
    string zoo;
    cin >> zoo;
    int r, s;
    r = extract_z(zoo);
    s = extract_o(zoo);
    if (s = 2 * r)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}