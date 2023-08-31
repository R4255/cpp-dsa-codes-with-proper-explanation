#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void merge(vector<int>&array,int s,int e){
    int i=s;
    int m=(s+e)/2;
    int j=m+1;
    vector<int>temp;//to store and return to the original array
    while(i<=m and j<=e){
        if (array[i]<array[j]){
            temp.push_back(array[i]);
            i++;
        }
        else {
            temp.push_back(array[j]);
            j++;
        }
    }
    //now we might be left with elements on either of the half 
    while(i<=m){
        temp.push_back(array[i++]);
    }
    //or we copy from the other half
    while(j<=e){
        temp.push_back(array[j++]);
    }
    //now the task is to copy from the temp to the original array to reflect back the changes
    int k=0;
    for (int idx=s;idx<=e;idx++){
        array[idx]=temp[k++];
    }
    return;
}
void mergesort(vector<int>&array,int s,int e){
    //base case
    if(s>=e){
        return ;
    }
    //recursive case
    int mid=(s+e)/2;
    mergesort(array,s,mid);
    mergesort(array,mid+1,e);
    return merge(array,s,e);
}
int main(){
    vector<int>array={14,143,1234,1641,1324,11};
    int s=0;
    int e=array.size()-1;
    mergesort(array,s,e);
    for (int x:array){
        cout<<x<<"->";
    }
    cout<<endl;
    return 0;
}