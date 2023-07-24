#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Create a constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int count = 1;

    // iterating through position -1 times
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // Insert At last positon
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *Node1 = new Node(10);
    // cout << Node1->data << endl;
    // cout << Node1->next << endl;

    // head pointed to Node1
    Node *head = Node1;
    /*
     print(head);

     insertAtHead(head, 12);
     print(head);

     insertAtHead(head, 15);
     print(head);
 */
    Node *tail = Node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtPosition(tail, head, 3, 13);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    return 0;
}