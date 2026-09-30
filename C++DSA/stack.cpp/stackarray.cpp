#include<iostream>
using namespace std;
class stack{
    private:
    int arr[5];
    int top;
    public:
    stack(){
        top=-1;
    }
    void push(int value){
        if(top==4){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=value;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        cout<<"Deleted: "<<arr[top]<<endl;
        top--;
    }
    void peek(){
        if(top==-1){
            cout<<"Stack is empty "<<endl;
            return;
        }
        cout<<"Top element: "<<arr[top]<<endl;
    }
    void display(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return;
        }
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"stack: ";
    s.display();
    s.peek();
    s.pop();
    cout<<"After pop: ";
    s.display();
    return 0;

}