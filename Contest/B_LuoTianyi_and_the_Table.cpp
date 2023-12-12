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
  int n,m;
  cin>>n>>m;
  int x = n*m;
  int arr[x];
  for(int i=0; i<x; i++){
    cin>>arr[i];
  }
  sort(arr, arr+x, greater<int>());
  int z = arr[0]-arr[x-1];
  int q = z*(x-1);
  int sub = arr[0]-arr[1];
  cout<<q<<endl;
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}