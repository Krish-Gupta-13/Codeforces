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
int arr[100000];
  int n;
  cin>>n;
  vector<ll> v;
  for(int i=0; i<n; i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
  }
  stg
  if(n==1){
    if(v[0]==1){
        yes
        return;
    }
    else{
        no
        return;
    }
  }
  else{
    if(v[0]>v[1]+1){
        no
    }
    else
        yes

  }
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}