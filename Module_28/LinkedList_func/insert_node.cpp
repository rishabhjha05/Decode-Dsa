#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        Node::val = val;
        Node::next = NULL;
    }
};
class linkedlist
{
public:
    Node *head, *tail;
    int size;
    linkedlist()
    {
        head = tail = NULL;
        size = 0;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
        return;
    }

    void addAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size != 0)
        {
            temp->next = head;
            head = temp;
        }
        else
            head = tail = temp;
        size++;
        return;
    }
    void addAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size != 0)
        {
            tail->next = temp;
            tail = temp;
        }
        else
            head = tail = temp;
        size++;
        return;
    }

    void insert(int idx, int val)
    {
        if (idx < 0 || idx > size)
            cout << "error, invalid argument";
        else if (idx == 0)
            addAtHead(val);
        else if (idx == size)
            addAtTail(val);
        else
        {
            Node *temp = head;
            Node *temp2 = new Node(val);
            for (int i = 1; i < idx; i++)
                temp = temp->next;
            temp2->next = temp->next;
            temp->next = temp2;
        }
        size++;
        return;
    }
};
int main()
{
    linkedlist ll;
    ll.addAtHead(30);
    ll.addAtHead(10);
    ll.display();
    ll.addAtTail(40);
    ll.display();
    ll.insert(1, 20);
    ll.display();
    return 0;
}
//?