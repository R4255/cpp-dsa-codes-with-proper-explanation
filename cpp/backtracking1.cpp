//task is to first create a array and then print it and then on back tracking print the negative valuess
#include<iostream>
using namespace std;
void printarray(int * arr, int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void fill_array(int *arr, int n,int i,int val){
    //this is a recursive function there fore a base case and a recursive case
    if (i==n){
        printarray(arr,n);
        return;
    }
    arr[i]=val;
    fill_array(arr,n,i+1,val+1);
    arr[i]=-1*arr[i];
    //this arr is passed by reference 
}
int main(){
    int arr[100]={0};
    int n,val;
    cin>>n;
    fill_array(arr,n,0,1);
    cout<<endl;
    printarray(arr,n);
}