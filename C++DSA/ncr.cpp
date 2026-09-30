#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
        }
        else
        return fact(n-1)*n;
}
int ncr(int n,int r){
    int nom,den;
    nom=fact(n);
    den=fact(r)*fact(n-r);
        return nom/den;
}
int NCR(int n,int r){
    if(n==r||r==0)
    return 1;
    return NCR(n-1,r-1)+NCR(n-1,r);
}
int main(){
    cout<<NCR(5,1);
    return 0;
}