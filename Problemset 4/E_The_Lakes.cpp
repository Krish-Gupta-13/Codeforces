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
int adj[1001][1001];
int DFS(vector<vector<int>> &visited, int row, int col,  int n, int m){
    visited[row][col] = 1;
    int sum = adj[row][col];

    int delrow[] = {-1,+1,0,0};
    int delcol[] = {0,0,+1,-1};
    for(int i=0; i<4; i++){
        int nrow = row + delrow[i];
        int ncol = col + delcol[i];
        if(nrow>=0 && nrow<n && ncol<m && ncol>=0 && visited[nrow][ncol]==0 && adj[nrow][ncol]>0){
            sum = sum + DFS(visited, nrow, ncol, n, m);
            }
    }
    return sum;
    
}


int main(){
  ll t;
  cin>>t;
  while(t--){
int ans = 0;
  int n,m;
  cin>>n>>m;
  vector<vector<int>> visited(n,vector<int>(m, 0));
//   vector<int> adj[n];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>adj[i][j];
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(visited[i][j]==0 && adj[i][j]>0){
            ans = max(ans,DFS(visited, i, j, n, m));
        }
    }

  }
  cout<<ans<<endl;
 }
return 0;
}