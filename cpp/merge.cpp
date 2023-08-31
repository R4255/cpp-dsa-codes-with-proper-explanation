#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
void printll(Node * root){
    Node *temp=root;
    while((temp->next)!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
//to append the node in a certain linked list 
Node * append(Node* root,int data){
    Node*temp=root;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp=new Node(data);
    return root;
}
//now given two linked list we need to mix them 
//cases:if one of them doesnot exit 
//if both exist 
//is either of them are NULL
Node * merge(Node* root1,Node *root2){
    Node* root=NULL;
    if (!root1 and !root2){
        return NULL;
    }
    if(root1 or root2){
        while(root1){
            root=append(root,root1->data);
            root1=root1->next;
        }
        while(root2){
            root=append(root,root2->data);
            root2=root2->next;
        }
        return root;
    }
}
int main(){
    Node* Root;
    Node* Root1;
    Node* Root2;
    Root=new Node(0);//why new is working and not just Root=Node(5)
    Root1=new Node(0);
    int x,y;
    Node* temp=Root;
    Node* temp1=Root1;
    while(x!=-1){
        cin>>x;
        temp->next=new Node(x);
        temp=temp->next;
    }
    while(y!=-1){
        cin>>y;
        temp1->next=new Node(y);
        temp1=temp1->next;
    }
    Root2=merge(Root,Root1);
    printll(Root2);
    return 0;
}