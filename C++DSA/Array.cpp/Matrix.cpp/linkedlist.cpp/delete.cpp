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
void deleteFirst(Node*& head){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node*temp=head;
    head=head->next;
    delete temp;
}
void deletekey(Node*&head,int key){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    if(head->data==key){
        Node*temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node*temp=head;
    while(temp->next!=NULL){
        if (temp->next->data==key){
            Node*del=temp->next;
            temp->next=temp->next->next;
            delete del;
            return;
        }
        temp=temp->next;
    }
    cout<<"Node not found"<<endl;
}
int main(){
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    cout<<"Linked list before deletion: "<<endl;
    display(head);
    int key;
    cout<<"\nEnter the value to delete: ";
    cin>>key;
    deletekey(head,key);
    cout<<"Linked list after deletion: "<<endl;
    display(head);
    return 0;
}