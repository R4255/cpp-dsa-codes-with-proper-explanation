#include<iostream>
#include"list.h"
using namespace std;
int main(){
    list ll;//object of the class list
    //can we write ll.head=new Node(23);
    //  Node* n=new Node(100);
    //ll.head=n;
    ll.push_back(2);
    ll.push_front(3);
    ll.push_front(1);
    ll.push_front(0);
    /*Node* temp=ll.head;can we write it here*/ 
    //the ll.printlist is also working 
    //only problem we are getting is in the ll.head =n initialization in the 8th line 
    ll.insert(1000,2);
    ll.insert(110000,0);
    Node*temp=ll.head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"here we are seaching for the element"<<endl;
    int key;
    cin>>key;
    cout<<ll.search(key)<<endl;
    return 0;
}