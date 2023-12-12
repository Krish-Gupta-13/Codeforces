//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define llf long long float
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nm cout<<"-1"<<endl;
#define F first 
#define S second
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
//Jda mt soch code krte ja//

int dfs(int arr[], int ind, int prev, int n, vector<vector<int>> dp){
    if(ind==n)
        return 0;
    
    if(dp[ind][prev]!=-1)
        return dp[ind][prev];
    
    int l = dfs(arr, ind+1, 2, n, dp) + 1;
    int r = 1e9;

    if(arr[ind]==1){
        if(prev!=0)
            r = min(r, dfs(arr, ind+1, 0, n, dp));
    }
    else if(arr[ind]==2){
        if(prev!=1)
            r = min(r, dfs(arr, ind+1, 1, n, dp));
    }
    else if(arr[ind]==3){
        if(prev!=0)
            r = min(r, dfs(arr, ind+1, 0, n, dp));
        if(prev!=1)
            r = min(r, dfs(arr, ind+1, 1, n, dp));
    }
    return dp[ind][prev] = min(l,r);
}

void solve(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
  ll n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  vector<vector<int>> dp(n+1, vector<int>(4, -1));
  cout<<dfs(arr, 0, 2, n,dp)<<endl;
}


int main(){
//   ll testcases;
//   cin>>testcases;
//   while(testcases--){
  solve();
//  }
return 0;
}