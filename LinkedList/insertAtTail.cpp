#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtTail(Node* &tail, int data){
    Node* temp= new Node(data);
    tail->next=temp;
    tail=tail->next;
}
void print(Node* &tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

int main(){
    Node* node1 = new Node(10);
    Node* tail = node1;
    print(tail);
    insertAtTail(tail, 12);
    print(tail);
    insertAtTail(tail, 15);
    print(tail);
    
    return 0;
}