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
bool search(Node*head,int key){
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        else{
            temp=temp->next;
        }
    }
    return false;
}
int main(){
    int key;
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    cout<<"Enter the value to be searched: ";
    cin>>key;
    if(search(head,key)){
        cout<<"Value found in the linked list."<<endl;
    }
    else{
        cout<<"Value not found in the linked list."<<endl;
    }
    return 0;
}