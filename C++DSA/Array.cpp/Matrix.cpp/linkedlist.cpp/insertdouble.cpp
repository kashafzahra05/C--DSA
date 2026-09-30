#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }
};
void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
void insertatbeg(Node*&head,int value){
    Node*newNode=new Node(value);
    newNode->next=head;
    if(head!=NULL){
        head->prev=newNode;
    }
    head=newNode;
}
void insertatend(Node*&head,int value){
    Node*newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
}
void insertafter(Node*&head,int value,int key){
    Node*temp=head;
    while(temp!=NULL && temp->data!=key){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Key not found"<<endl;
        return;
    }
    Node*newNode=new Node(value);
    newNode->next=temp->next;
    newNode->prev=temp;
    if(temp->next!=NULL){
        temp->next->prev=newNode;
    }
    temp->next=newNode;
}
int main(){
    Node*head=new Node(10);
    Node*second=new Node(20);
    Node*third=new Node(30);
    head->next=second;
    second->next=third;
    second->prev=head;
    third->prev=second;
    cout<<"Doubly linked list elements: ";
    display(head);
    cout<<endl;
    insertatbeg(head,5);
    cout<<"After inserting 5 at the beginning: ";
    display(head);
    cout<<endl;
    insertatend(head,40);
    cout<<"After inserting 40 at the end: ";
    display(head);
    cout<<endl;
    insertafter(head,25,20);
    cout<<"Inserting 25 after 20: ";
    display(head);
    return 0;
}