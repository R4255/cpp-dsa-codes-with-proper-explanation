//we will create a templated class of both stack and node
//forward declaration of class stack
using namespace std;
template<typename T>
class stack;
template<typename T>
class Node{
    public:
    T data;
    Node<T> * next;
    Node (T d){
        data=d;
        next=nullptr;
    }
};
template<typename T>
class stack{
    public:
    Node<T> * head;
    stack(){
        head=nullptr;
    }
    void push(T data){
        Node<T> * n=new Node<T>(data);
        n->next=head;
        head=n;
    }
    bool empty(){
        return head==NULL;
    }
    T top(){
        return head->data;
    }
    void pop(){
        if(head!=NULL){
            Node<T>*temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }
};