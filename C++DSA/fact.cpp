#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
        }
        else
        return fact(n-1)*n;
}
int facti(int n){
    int i;
    int f=1;
    for(i=1;i<=n;i++)
        f=f*i;
        return f;
}
int main(){
    int x;
    x=facti(5);
    cout<<x;
    return 0;
}