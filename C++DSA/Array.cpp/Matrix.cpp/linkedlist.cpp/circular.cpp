#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
void insert(Node*&head,int value){
    Node*newNode=new Node(value);
    if (head==NULL){
        head=newNode;
        head->next=head;
    }
    else{
        Node*temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=head;
    }
}
void display(Node*head){
    if (head==NULL){
        cout<<"Empty list"<<endl;
        return;
    }
    Node*temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
}
int main(){
    Node*head=NULL;
    insert(head,10);
    insert(head,20);
    insert(head,30);
    cout<<"Circular linked list after insertion: ";
    display(head);
    return 0;
   
}