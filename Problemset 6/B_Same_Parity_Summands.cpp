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
  ll n,k;
  cin>>n>>k;
  if(k==1){
    yes
    cout<<n<<endl;
    return;
  }
  if(n<k){
    no
  }
  else if(n==k+1){
    no
  }
  else if(n&1 && k%2==0){
    no
  }
  else if(n%2==0){
    if(k>n/2 && k&1){
        no
    }
    else if(k<=n/2){
        yes
        for(int i=0; i<k-1; i++){
            cout<<2<<" ";
        }
        cout<<n-2*(k-1)<<endl;
    }
    else{
        yes
        for(int i=0; i<k-1; i++){
            cout<<1<<" ";
        }
        cout<<n-(k-1)<<endl;
    }
  }
  else{
    if(k&1){
        yes
        for(int i=0; i<k-1; i++){
            cout<<1<<" ";
        }
        cout<<n-(k-1)<<endl;
    }
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