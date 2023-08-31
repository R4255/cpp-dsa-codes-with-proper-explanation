#include<iostream>
#include "trie.h"
using namespace std;


int main(){
	
	string words[] = {"hello","he","apple","aple","news"};
	trie t;

	for(auto word:words){
		t.insertion(word);
	}

	string key;
	cin>>key;
	cout<< t.search(key) <<endl;
	

	return 0;
}