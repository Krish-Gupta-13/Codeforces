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
  ll x,y,n;
  cin>>x>>y>>n;
vector<ll> v(n);
  ll a = (n-1)*n/2;
// if(a>y-x){
//     nm
//     return;
// }
 v[0] = y;
 for(int i=1; i<n; i++){
    v[i] = v[i-1]-i;
 }
 v[n-1] = x;
 reverse(v.begin(), v.end());
 if(v[1]-v[0]<=v[2]-v[1])
    nm
else{
 for(auto i:v)
    cout<<i<<" ";
cout<<endl;
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