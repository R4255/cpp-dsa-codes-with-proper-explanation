using namespace std;
#include<unordered_map>
class trie;
class Node{
    //structure of the node
    //contains a map containing all the elements linked to it with their address
    char data;
    unordered_map<char,Node*>t;
    bool isterminal;
    public:
    Node(char d){
        data=d;
        isterminal=false;
        /*Default Initialization: C++ objects, including containers like unordered_map, are automatically initialized to their 
        default values when an object of that type is created. 
        For unordered_map, the default constructor initializes it as an empty map.*/
    }
    friend class trie;
};
class trie{
    Node* root;
    public:
    trie(){
        root=new Node('\0');
    }
    void insertion(string word){
        Node*temp=root;
        //insertion of word implimentation
        for (char ch:word){
            if(temp->t.count(ch)==0){
                //the character is not present 
                //we insert it 
                Node* n=new Node(ch);
                temp->t[ch]=n;
                temp=temp->t[ch];
            }
        }
        temp->isterminal=true;
    }
    bool search(string word){

		Node*temp = root;
		for(char ch:word){
			if(temp->t.count(ch)==0){
				return false;
			}
			temp = temp->t[ch];
		}
		return temp->isterminal;
	}
};