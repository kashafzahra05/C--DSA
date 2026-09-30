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
void deleteNode(Node*&head,int value){
    if (head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    //if only one node is present
    if (head->data==value && head->next==head){
        delete head;
        head=NULL;
        return;
    }
    //if first node is to be deleted
    if(head->data==value){
        Node*last=head;
        while(last->next!=head){
            last=last->next;
        }
        Node*temp=head;
        head=head->next;
        last->next=head;
        delete temp;
        return;
    }
    //if particular node is to be deleted
    Node*temp=head;
    while(temp->next!=head){
        if(temp->next->data==value){
            Node*del=temp->next;
            temp->next=temp->next->next;
            delete del;
            return;
        }
        temp=temp->next;
    }
    cout<<"Node not found"<<endl;
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
int main(){
    Node*head=NULL;
    insert(head,10);
    insert(head,20);
    insert(head,30);
    cout<<"Circular linked list after insertion: ";
    display(head);
    cout<<endl<<"Deleting node with value 20"<<endl;
    deleteNode(head,20);
    cout<<"Circular linked list after deletion: ";
    display(head);
    return 0;
}