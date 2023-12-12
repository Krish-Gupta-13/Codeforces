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
// ll count = 0;
ll count1 = 0;
  ll n;
  cin>>n;
vector<ll> v(n);
  int k;
  cin>>k;
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  st
  vector<int> q;
  for(int i=0; i<n-1; i++){
    q.push_back(v[i+1]-v[i]);
  }
  int count = 0;
  int ans = 0;
  for(int i=0; i<n-1; i++){
    if(q[i]<=k){
        count++;
        ans = max(ans, count);
    }
    else{
        ans = max(count, ans);
        count = 0;
    }
  }
  ans = max(count, ans);
  if(ans==1){
    cout<<n-2<<endl;
  }
  else{
    cout<<n-1-ans<<endl;
  }
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}