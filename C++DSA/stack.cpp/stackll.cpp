# include <iostream>
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
class stack{
    private:
    Node*top;
    public:
    stack(){
        top=NULL;
    }
    void push(int value){
        Node*newnode=new Node(value);
        if(top==NULL){
            top=newnode;
            return;
        }
        newnode->next=top;
        top=newnode;
    }
    void pop(){
        if(top==NULL){
            cout<<"stack underflow"<<endl;
            return;
        }
        Node*temp=top;
        top=top->next;
        delete temp;
    }
    void peek(){
        if(top==NULL){
            cout<<"stack underflow"<<endl;
            return;
        }
        cout<<"top element is: "<<top->data<<endl;
    }
    void display(){
        if(top==NULL){
            cout<<"stack is empty"<<endl;
            return;
        }
        Node*temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.peek();
    s.display();
    s.pop();
    s.peek();
    s.display();
    return 0;
}
   
