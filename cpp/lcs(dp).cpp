#include<bits/stdc++.h>
using namespace std;
int lis(vector<int> arr){
  //we will cout the max in the dp array that we will create 
  int n=arr.size();
  vector<int>dp(n,1);
  int maxi=1;
  //we have initialized the dp vector will all 1's
  for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
      if(arr[i]>arr[j]){
        dp[i]=max(dp[i],1+dp[j]);
        maxi=max(dp[i],maxi);
      }
    }
  }
  return maxi;
}
int main(){
  vector<int>arr={50,4,10,8,30,100};
  cout<<lis(arr)<<endl;
  return 0;
}
