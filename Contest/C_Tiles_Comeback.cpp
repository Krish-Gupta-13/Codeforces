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
#define ppb pop_back
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define frr(i,a,b) for(ll i=a;i>=b;i--)
#define pi  3.14 
#define mod 1e9+7
// Jda mt soch code krte ja //

// Maths //
ll gcd(ll a, ll b){ if(b==0) return a; return gcd(b, a%b);} 
ll lcm(ll a, ll b){ return (a/gcd(a,b)*b); }

void solve(){
ll count = 1;
ll count1 = 0;
  ll n,k;
  cin>>n>>k;
vector<ll> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  for(int i=1; i<n; i++){
    if(v[i]==v[0]){
        count++;
    }
    if(count%k==0){
        count1 = i;
        break;
    }
  }
  if(count<k){
    no
    return;
  }
  if(v[0]==v[n-1] && count>=k){
    yes
    return;
  }
  count = 0;
  for(int i=count1; i<n; i++){
    if(v[i]==v[n-1]){
        count++;
    }
  }
  if(count>=k){
    yes
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