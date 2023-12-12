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
  int n,k;
  cin>>n>>k;
ll arr[n];
ll v[n];
ll arr1[n];
vector<pair<ll, ll>> p;
  for(int i=0; i<n; i++){
    cin>>arr[i];
    p.pb({arr[i], i});
  }
  for(int i=0; i<n; i++){
    cin>>arr1[i];
  }
 sort(p.begin(), p.end());
 sort(arr1, arr1+n);
 for(int i=0; i<n; i++){
    v[p[i].second]=arr1[i];
 }
 for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
 }
 cout<<endl;
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}
