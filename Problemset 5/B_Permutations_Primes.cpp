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
#define stg sort(odd.begin(), odd.end(), greater<>());
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define frr(i,a,b) for(ll i=a;i>=b;i--)
#define pi  3.14 
#define mod 1e9+7
// Jda mt soch code krte ja //

// Maths //
ll gcd(ll a, ll b){ if(b==0) return a; return gcd(b, a%b);} 
ll lcm(ll a, ll b){ return (a/gcd(a,b)*b); }

void solve(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
  ll n;
  cin>>n;
  vector<ll> odd;
  vector<ll> even;
  if(n==1){
    cout<<1<<endl;
    return;
  }
  if(n==2){
    cout<<"2 1"<<endl;
    return;
  }
  v.push_back(2);
  for(int i=4; i<=n; i++){
    v.pb(i);
  }
  v.pb(3);
  v.insert(v.begin()+n/2, 1);
  for(auto i:v)
    cout<<i<<" ";
    cout<<endl;
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}