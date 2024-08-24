#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
    Node(int val, Node *next)
    {
        data = val;
        next = next;
    }
};
Node *convertArrToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void traversal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int LengthOfLL(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int searchEle(Node *head, int val)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

void DeletionAtHead(Node *&head)
{
    Node *temp = head;
    head = head->next;
    free(temp);
}

void DeletionAtEnd(Node *&head)
{
    Node *second_last = head;
    while (second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }
    Node *temp = second_last->next;
    second_last->next = NULL;
    free(temp);
}

void DeleteAtPosition(Node *&head, int pos)
{
    if (pos == 0)
    {
        DeletionAtHead(head);
        return;
    }
    Node *prev = head;
    int curr_pos = 0;
    while (curr_pos != pos - 1)
    {
        prev = prev->next;
        curr_pos++;
    }
    Node *temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
}

int main()
{
    vector<int> arr = {10, 2, 3, 4, 5};
    Node *head = convertArrToLL(arr);
    // cout<<head->data<<endl;
    // cout<<LengthOfLL(head)<<endl;
    // cout << searchEle(head, 5)<<endl;
    // DeletionAtHead(head);
    // DeletionAtEnd(head);
    DeleteAtPosition(head, 3);
    traversal(head);
    return 0;
}