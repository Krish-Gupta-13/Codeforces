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
  ll n;
  cin>>n;
  ll x = n;
  ll a = 0,b = 0;
  for(ll i=2; i*i<n/2; i++){
    if(n%i==0){
        a = i;
        n = n/i;
        break;
    }
  }
  if(a==0){
    no
    return;
  }
  for(ll i=a+1; i*i<n; i++){
    if(n%i==0){
      b = i;
      n = n/i;
      break;
    }
  }
  if(b==0 || b==1 || b==a){
    no
    return;
  }
  ll c = n;
  if(a*b*c!=x){
    no
    return;
  }
  if(c!=a && c!=b && c!=1){
    yes
    cout<<a<<" "<<b<<" "<<c<<endl;
  }
  else
    no
}


int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}