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
    newNode->next=head;
    head=newNode;
}
void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    cout<<"Linked list before insertion: "<<endl;
    insert(head,5);
    display(head);
    return 0;
}