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
    return 0;
}