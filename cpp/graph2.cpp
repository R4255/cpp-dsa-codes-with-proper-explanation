#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>
using namespace std;
class Node{
public:
  string name;
  list<string>nbrs;
  Node(string name){
    this->name=name;
  }
};
class graph{
  unordered_map<string,Node*>m;
public:
  graph(vector<string>cities){
    //this will only initialize all the nodes of the cities 
    //it wont attach them 
    //the constructor accepts a vector of strings
    for(auto city:cities){
      m[city]=new Node(city);
    }
  }
  //now we need to attach each of them 
  void attachcity(string x,string y,bool undir=false){
    //m[x] will give us the pointer to the node 
    m[x]->nbrs.push_back(y);
    if(undir){
      m[y]->nbrs.push_back(x);
    }
  }
  void printgraph(){
    for(auto pair:m){
      string city=pair.first;
      Node* node=pair.second;
      cout<<city<<"->";
      for(auto nbr:node->nbrs){
        cout<<nbr<<",";
      }
      cout<<endl;
    }
  }
};
int main(){
  vector<string>cities={"delhi","london","paris","new york"};
  graph g(cities);
  g.attachcity("delhi","london");
  g.attachcity("new york","london");
  g.attachcity("delhi","paris");
  g.attachcity("paris","new york");
  g.printgraph();
  return 0;
}