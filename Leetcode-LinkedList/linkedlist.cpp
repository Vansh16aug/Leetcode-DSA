#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
    Node(int val, Node* next){
        data=val;
        next=next;
    }
};
Node* convertArrToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void traversal(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
}

int LengthOfLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp){
        count++;
        temp = temp->next;
    }
    return count;
}

int searchEle(Node* head , int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main(){
    vector<int> arr = {10,2,3,4,5};
    Node* head = convertArrToLL(arr);
    // cout<<head->data<<endl;
    // traversal(head);
    // cout<<LengthOfLL(head);
    cout<<searchEle(head , 5);
    return 0;
}