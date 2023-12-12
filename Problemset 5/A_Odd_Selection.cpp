//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define llf long long float
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
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
ll odd = 0;
ll even = 0;
  ll n,x;
  cin>>n>>x;
vector<ll> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
    if(v[i]&1)
        odd++;
    else    
        even++;
  }
  if(odd==n && x%2==0)
     no
  else if(odd>=x)
    yes
  else if(even==n)
    no
  else{
    if((x-even)%2==0 && (x-even)<=odd && x!=n){
        yes
    }
    else if((x-even)&1)
        yes
    else
        no
  }


int arr[n];
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}