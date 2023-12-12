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
void solve(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
int arr[100000];
  int n = 8;
  char s[8][8];
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>s[i][j];
    }
  }
  for(int i=0; i<n-2; i++){
    for(int j=0; j<n-2; j++){
        if(s[i][j]=='#' && s[i+2][j]=='#' && s[i][j+2]=='#' && s[i+2][j+2]=='#' && s[i+1][j+1]=='#'){
            count = i+1;
            count1 = j+1;
            break;
        }
    }
  }
  cout<<count+1<<" "<<count1+1<<endl;
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}