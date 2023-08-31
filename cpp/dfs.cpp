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
  void dfshelper(int node,bool * visited){
    visited[node]=true;
    cout<<node<<",";
    //now make a call on its neighbours
    for(auto nbr:l[node]){
      if(!visited[nbr]){
        dfshelper(nbr,visited);
      }
    }
    return ;
  }
  void dfs(int source){
    bool* visited=new bool[v]{0};
    dfshelper(source,visited);
  }
};
