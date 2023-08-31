#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6};
    int x=sizeof(arr)/sizeof(int);//but the indices are till 4 (0,1,2,3,4)
    cout<<x;
    return 0;
}