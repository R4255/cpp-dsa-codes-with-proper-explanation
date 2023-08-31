#include<iostream>
#include<list>
#include<queue>
using namespace std;
//first we will create adjacency list of elements
//secondly we will create a queue 
//push the element mark it as done or visited 
//pop the element 
//push the nbrs of the element 
//and we repeat the process
class graph{
  list<int>*l;//l will point to a array of linked list
  int v;
public:
  graph(int V){
    v=V;
    l=new list<int>[v];
  }
  void addEdge(int u,int v,bool undir=true){
    l[u].push_back(v);
    if(undir){
      l[v].push_back(u);
    }
  }
  void printgraph(){
    for (int i=0;i<v;i++){
      cout<<i<<"->";
      for(auto x:l[i]){
        cout<<x<<",";
      }
      cout<<endl;
    }
  }
    void bfs(int source){
      queue<int>q;
      //we will create a queue of int 
      //and also an array of bool all initialized currently with 0;
      //push karte hi make the visited of that element as true

      bool *visited=new bool[v]{0};
      q.push(source);
      while(!q.empty()){
        int f=q.front();
        q.pop();
        visited[f]=true;
        cout<<f<<" ";
        for(auto element:l[f]){
          if(!visited[element]){
            q.push(element);  
          }
        }
      }
        
    }
};
