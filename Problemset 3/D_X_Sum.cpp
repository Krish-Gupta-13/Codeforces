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

bool isSafe(int i, int j, int n, int m){
    if(i>=0 && j>=0 && i<n && j<m){
        return true;
    }
    return false;
}

void solve(){
  int n,m;
  cin>>n>>m;
  int arr[n][m];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>arr[i][j];
    }
  }
  int maxi = 0;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        int ans = 0;
        int ci=i; 
        int cj=j;
        while(isSafe(ci,cj,n ,m)){
            ans = ans + arr[ci][cj];
            ci--;
            cj--;
        }

        ci = i;
        cj = j;
        while(isSafe(ci,cj, n, m)){
            ans = ans + arr[ci][cj];
            ci++;
            cj--;
        }

        ci = i;
        cj = j;
        while(isSafe(ci,cj, n, m)){
            ans = ans + arr[ci][cj];
            ci--;
            cj++;
        }

        ci = i;
        cj = j;
        while(isSafe(ci,cj, n, m)){
            ans = ans + arr[ci][cj];
            ci++;
            cj++;
        }
        ans = ans - arr[i][j]*3;
        maxi = max(maxi, ans);
    }
  }
  cout<<maxi<<endl;
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}