#include<iostream>
using namespace std;
class UpperTriangular{
    int arr[3][3];
public:
    UpperTriangular();
    void set(int i,int j,int x);
    int get(int i,int j);
};
UpperTriangular::UpperTriangular(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=0;
        }
    }
}
void UpperTriangular::set(int i,int j,int x){
    if(i<=j){
        arr[i][j]=x;
    }
}
int UpperTriangular::get(int i,int j){
    if(i<=j){
        return arr[i][j];
    }
    return 0;
}
int main(){
    UpperTriangular u;
    u.set(0,0,1);
    u.set(0,1,2);
    u.set(0,2,3);
    u.set(1,1,4);
    u.set(1,2,5);
    u.set(2,2,6);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<u.get(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}