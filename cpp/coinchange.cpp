#include<bits/stdc++.h>
using namespace std;
//we are using the bottom up approach 
//iterative solution 
int minnumberofcoins(int m,vector<int>denominatios){
  //first set all the elements of the array to INT_MAX
  vector<int>dp(m+1,0);
  dp[0]=0;
  for(int i=1;i<=m;i++){
    dp[i]=INT_MAX;
    for (auto c:denominatios){
      if(dp[i-c]!=INT_MAX and i-c>=0){
        dp[i]=min(dp[i],dp[i-c]+1);
      }
    }
  }
  return dp[m]==INT_MAX?-1:dp[m];
  //dp[m]==int_max we return -1 else dp[m]
}
int main(){
  vector<int>denominatios={1,3,10,7};
  cout<<minnumberofcoins(15,denominatios);
  return 0;
}