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
vector<ll> a(n);
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  vector<bool> red(n, false);
  vector<bool> blue(n, false);
  for(int i=0; i<n; i++){
    if(!red[i]){
        red[i] = 1;
        blue[i] = 1;
    }
    if(i-1>=0 && blue[i]){
        if(blue[i-1] && a[i]>0){
            blue[i-1] = 0;
            a[i]--;
        }
    }
    if(i+1<n){
        if(a[i]>0){
            red[i+1] = 1;
            a[i]--;
        }
    }
  }
  for(int i=0; i<n; i++){
    if(blue[i])
        count++;
  }
  cout<<count<<endl;
}

int main(){
  solve();
return 0;
}