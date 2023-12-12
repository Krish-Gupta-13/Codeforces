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
// ll gcd(ll a, ll b){ if(b==0) return a; return gcd(b, a%b);} 
// ll lcm(ll a, ll b){ return (a/gcd(a,b)*b); }

void solve(){
  ll n,m,x;
  cin>>n>>m>>x;
  int a,b;
  cin>>a>>b;
  int z = a+b;
  for(int i=0; i<x; i++){
    int q,w;
    cin>>q>>w;
    int t = q+w;
    if(t%2==1 && z%2==1){
        no
        // return;
        break;
    }
    if(t%2==0 && z%2==0){
        no
        // return;
        break;
    }
  }
  yes
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}