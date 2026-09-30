#include<iostream>
using namespace std;
int main(){
    int vertices=4;
    int graph[4][4]={0};
    graph[0][1]=1;
    graph[1][0]=1;
    graph[0][2]=1;
    graph[2][0]=1;
    graph[1][2]=1;
    graph[2][1]=1;
    graph[1][3]=1;
    graph[3][1]=1;
    cout<<"Adjacency Matrix of the Graph:"<<endl;
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}