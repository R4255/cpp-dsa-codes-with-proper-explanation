//THIS IS THE HEADER FILE FOR LINKEDLIST CPP FILE
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node*next;     
        Node(int d):data(d),next(NULL){}
};
class list{
    public:
        Node* head;
        Node* tail;
        list():head(NULL),tail(NULL){}
        void push_front(int data){
            if (head==NULL){
                Node*n=new Node(data);
                head=tail=n;
            }
            else{
                Node*n=new Node(data);
                n->next=head;
                head=n;
            }
        }
        void push_back(int data){
            if(head==NULL){
                Node*n=new Node(data);
                head=tail=n;
            }
            else{
                Node*n=new Node(data);
                tail->next=n;
                tail=n;
            }//we applied the same push_front logic here as well   
        }
        //search in the linked list and find out the index
        int search(int key){
            Node* temp=head;
            int cnt=0;
            
            while(temp!=NULL){
                if(temp->data==key){
                    return cnt;
                }
                
                cnt++;
                temp=temp->next;
            }
            return -1;
        }
        void printlinkedlist(){
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->data<<endl;
                temp=temp->next;
            }
        } 
        void insert(int data,int pos){
            Node*temp=head;
            if(pos==0){
                push_front(data);
            }
            else{
                for (int jump=1;jump<=pos-1;jump++){
                    temp=temp->next;
                }
                Node*n=new Node(data);
                n->next=temp->next;
                temp->next=n;
            }

        }
        void pop_front(){
            Node* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }    
        ~list(){
            if(head!=NULL){
                delete head;
                head=NULL;w
            }
        }
};
