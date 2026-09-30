#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
        }
        else
        return sum(n-1)+n;
}
int sumi(int n){
    int i;
    int s=0;
    for(i=1;i<=n;i++)
        s=s+i;
        return s;
}
int main(){
    int x;
    x=sumi(5);
    cout<<x;
    return 0;
}