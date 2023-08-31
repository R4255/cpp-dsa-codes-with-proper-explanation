#include<iostream>
#include<vector>
using namespace std;
template<typename T>
class stack{
    vector<T>arr;
    public:
    void push_data(T data){
        arr.push_back(data);
    }
    void pop(){
        arr.pop_back();
    }
    T top(){
        int idx=arr.size()-1;
        cout<<arr[idx];
    }
    bool empty(){
        return arr.size()==0;
    }
};