// This is the basic implementation of linked list
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // creating a constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    Node *Node1 = new Node(10); // while creating constructor of Node () can't be empty
    cout << Node1->data << endl;
    cout << Node1->next << endl;

    return 0;
}
