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
ll count = 0;
ll count1 = 0;
  ll n;
  cin>>n;
  int c0 = 0;
  int c1 = 0;
  int c2 = 0;
vector<ll> v(n);
  fr(i,0,n){
    cin>>v[i];
    if(v[i]%3==0)
        c0++;
    else if(v[i]%3==1)
        c1++;
    else
        c2++;
  }
  ll t = n/3;
  ll ans = 0;
  if(c2>=c1 && c2>=c0){
    ans = ans + c2-t;
    c0 = ans + c0;
    ans = ans + c0-t;
  }
  else if(c1>=c0 && c1>=c2){
    ans = ans + c1-t;
    int x = max(c2, c0);
    ans = ans + c2-t;
  }
  else if(c0>=c1 && c0>=c2){
    ans = ans + c0-t;
    c1 = ans + c1;
    ans = ans + c1-t;
  }
  cout<<ans<<endl;
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}