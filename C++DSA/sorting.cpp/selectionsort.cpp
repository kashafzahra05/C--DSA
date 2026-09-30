#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={1,3,4,2,5};
    //selection sort
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
    cout<<"Sorted array: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}