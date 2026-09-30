#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
int max(Node*head){
    int max=head->data;
    Node*temp=head->next;
    while(temp!=NULL){
        if(temp->data>max){
            max=temp->data;
        }
        temp=temp->next;
    }
    return max;
}
int main(){
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    cout<<"Maximum value in the linked list is: "<<max(head)<<endl;
    return 0;
}