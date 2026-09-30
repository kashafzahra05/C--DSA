#include<iostream>
using namespace std;
void set(int arr[5][5],int i,int j,int x){
    if(i==j){
        arr[i-1][j-1]=x;
    }  
}
int get(int arr[5][5],int i,int j){
    if(i==j){
        return arr[i-1][j-1];
    }
    return 0;
}
int main(){
    int arr[5][5]={0};
    set(arr,1,1,5);
    set(arr,2,2,10);
    set(arr,3,3,15);
    set(arr,4,4,20);
    set(arr,5,5,25);
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<get(arr,i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}