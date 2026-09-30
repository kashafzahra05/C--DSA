#include<iostream>
using namespace std;
class Symmetricmatrix{
    int arr[3][3];
public:
    Symmetricmatrix();
    void set(int i,int j,int x);
    int get(int i,int j);
};
Symmetricmatrix::Symmetricmatrix(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=0;
        }
    }
}
void Symmetricmatrix::set(int i,int j,int x){
        arr[i][j]=x;
        arr[j][i]=x;
}
int Symmetricmatrix::get(int i,int j){
        return arr[i][j];
}
int main(){
    Symmetricmatrix s;
    s.set(0,0,1);
    s.set(0,1,2);
    s.set(0,2,3);
    s.set(1,1,4);
    s.set(1,2,5);
    s.set(2,2,6);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<s.get(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}