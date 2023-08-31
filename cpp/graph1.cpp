#include<bits/stdc++.h>
using namespace std;
class graph{
  int v;
  list<int> *l;//this is a pointer to an array of pointers
public:
  graph(int V){
    v=V;  
    l=new list<int>[V];
  }
  void addEdge(int i,int j,bool undir=true){
    l[i].push_back(j);
    if(undir){
      l[j].push_back(i);
    }
  }
  void printgraph(){
    for(int i=0;i<v;i++){
      cout<<i<<"->";
      for(auto x:l[i]){
        cout<<x<<",";
      }
      cout<<endl;
    }
  }
};
int main(){
    graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(2,1);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.printgraph();
    return 0;
}




