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
vector<ll> q;
vector<ll> arr;
// int arr[100000];
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
   int ele;
   cin>>ele;
   arr.push_back(ele);
  }
  for(int i=0; i<n; i++){
    if(arr[i]%2==0){
    v.push_back(arr[i]);
    }
    else{
        q.push_back(arr[i]);
    }
  }
  if(q.empty() || v.empty()){
    yes
    return;
  }
  st
  sort(q.begin(), q.end());
  if(q[0]>v[0]){
    no
    return;
  }
    yes
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}