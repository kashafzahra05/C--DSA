#include<iostream>
using namespace std;
int graph[5][5]={{0,1,1,0,0},
                 {1,0,1,1,0},
                 {1,1,0,0,1},
                 {0,1,0,0,1},
                 {0,0,1,1,0}};
bool visited[5]={false};
void DFS(int vertex){
    visited[vertex]=true;
    cout<<vertex<<" ";
    for(int i=0;i<5;i++){
        if(graph[vertex][i]==1 && !visited[i]){
            DFS(i);
        }
    }
}
int main(){
    int start=0;
    cout<<"DFS Traversal of the Graph:"<<endl;
    DFS(start);
    return 0;
}