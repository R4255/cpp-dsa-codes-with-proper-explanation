#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
Node* buildtree(){
    //this function takes the input from the user and then make nodes accordingly and link them 
    int dd;
    cin>>dd;
    if(dd=-1){
        return NULL;
    }
    Node*n=new Node(dd);
    n->left=buildtree();
    n->right=buildtree();
    return n;
}
void printpreorder(Node* root){
    //node then left and then right
    if(root==NULL){
        return;
    }
    cout<<root->data<<endl;
    printpreorder(root->left);
    printpreorder(root->right);
}
//void function donot return anything ..
void printinorder(Node* root){
    //print left then root and then the right
    if(root==NULL){
        return;
    }
    printinorder(root->left);
    cout<<root->data<<" ";
    printinorder(root->right);
}
void levelorderprint(Node* root){
    queue<Node*>que;//either we can create of the type node or of the node* 
                    //because the node type will occupy much space and to avoid that we use Node*   
                        //we cant use the int type because we wont be able to access the other nodes 
    que.push(root);
    que.push(NULL);
    while(!que.empty()){
        Node* temp=que.front();
        if(temp==NULL){
            cout<<endl;
            que.pop();
            if(!que.empty()){
                que.push(NULL);
            }
        }
        else{           
            cout<<temp->data;
            que.pop();
            if(temp->left){
                que.push(temp->left);
            }   
            if(temp->right){
                que.push(temp->right);
            }
        }
    }
    return;
}
Node* levelorderbuild(){
    //in this case we are given the level wise print of the binary tree 
    //we need to build the tree
    //we will the queue 
    int d;
    cin>>d;
    queue<Node*> q;
    Node*root=new Node(d);
    q.push(root);//here we have push the root
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        int c1,c2;
        cin>>c1>>c2;
        if(c1!=-1){
            temp->left=new Node(c1);
            q.push(temp->left);
        }
        if(c2!=-1){
            temp->right=new Node(c2);
            q.push(temp->right);
        }
        
    }
    return root;
}
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int h1=height(root->left);
    int h2=height(root->right);
    return 1+max(h1,h2);
}
