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
void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void reverse(Node*&head){
    Node*next=NULL;
    Node*prev=NULL;
    Node*current=head;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}
int main(){
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    cout<<"Before reversing: ";
    display(head);
    reverse(head);
    cout<<endl<<"After reversing: ";
    display(head);
    return 0;
}