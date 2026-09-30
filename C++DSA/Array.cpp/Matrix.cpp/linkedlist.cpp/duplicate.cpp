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
void duplicate(Node*head){
    Node*temp=head;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->data==temp->next->data){
            Node*dup=temp->next;
            temp->next=temp->next->next;
            delete dup;
        }
        else{
            temp=temp->next;
        }
    }

}

int main(){
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(20);
    head->next->next->next=new Node(30);
    cout<<"Before removing duplicates: ";
    display(head);
    duplicate(head);
    cout<<endl<<"After removing duplicates: ";
    display(head);
    return 0;
}