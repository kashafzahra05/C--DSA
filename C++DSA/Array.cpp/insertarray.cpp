#include<iostream>
using namespace std;
void insert(int arr[],int &length,int size,int index,int n){
    for(int i=length;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=n;
    length++;
}
void deleteArray(int arr[],int &length,int index){
    for(int i=index;i<length-1;i++){
        arr[i]=arr[i+1];
    }
    length--;
}
int main(){
    int arr[10]={0,1,2,3,4,5,6};
    int length=7;
insert(arr,length,7,3,10);
deleteArray(arr,length,4);
for(int i=0;i<length;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
