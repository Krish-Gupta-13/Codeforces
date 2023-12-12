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
vector<ll> v;
  ll a,b;
  cin>>a>>b;
  ll mini = 1;
  ll maxi = 0;
  ll n = a/b;
  if(a%b==0){
    ll p = a/b;
    mini = b*p*(p-1)/2;
  }
  else{
    ll p = a%b;
    ll q = a/b;
    mini = (b-p)*q*(q-1)/2 + p*q*(q+1)/2;
  }
  ll m = (a-b+1);
  if(m>1){
    maxi = m*(m-1)/2;
  }
  cout<<mini<<" "<<maxi<<endl;

}

int main(){

  solve();

return 0;
}