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
vector<ll> same;
  ll n;
  cin>>n;
vector<ll> v(n);
  map<int, int> m;
  for(int i=0; i<n; i++){
    cin>>v[i];
    m[v[i]]++;
  }
  st
    int i=0; 
    int j=n-1;
    while(i<=j){
        same.push_back(v[i]);
        same.push_back(v[j]);
        i++;
        j--;
    }
reverse(same.begin(), same.end());
if(n%2==0){
    for(auto i:same)
        cout<<i<<" ";
}
else{
    for(int i=1; i<same.size(); i++){
        cout<<same[i]<<" ";
    }
}
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