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
ll count2 = 0;
vector<ll> v;
  ll n;
  cin>>n;
  string s;
  cin>>s;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='A')
        count=1;
    if(s[i]=='B')
        count1=1;
    if(s[i]=='C')
        count2=1;
    if(count1==1 && count==1 && count2==1){
        cout<<i+1<<endl;
        return;
    }
  }
}

int main(){
//   ll testcases;
//   cin>>testcases;
//   while(testcases--){
  solve();
//  }
return 0;
}