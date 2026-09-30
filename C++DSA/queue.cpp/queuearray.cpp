#include<iostream>
using namespace std;
class queue{
    private:
    int arr[5];
    int rear;
    int front;
    public:
    queue(){
        rear=-1;
        front=-1;
    }
    void enqueue(int value){
        if(rear==4){
            cout<<"Queue is full"<<endl;
            return;
        }
        if(front==-1){
            front=0;
        }
        rear++;
        arr[rear]=value;
    }
    void dequeue(){
        if(front==-1|| front>rear){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Deleted: "<<arr[front]<<endl;
        front++;
    }
    void peek(){
        if(front==-1|| front>rear){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Front element: "<<arr[front]<<endl;
    }
    void display(){
         if(front==-1|| front>rear){
            cout<<"Queue is empty"<<endl;
            return;
        }   
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    } 
};
int main(){
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout<<"Queue: ";
    q.display();
    q.peek();
    q.dequeue();
    cout<<"after dequeue: ";
    q.display();
    return 0;
}