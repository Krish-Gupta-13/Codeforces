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
ll count1 = 0;
ll ans = 0;
vector<ll> v;
  ll n,d;
  cin>>n>>d;
  vector<string> s(n);
  for(int i=0; i<n; i++){
    cin>>s[i];
  }
  for(int i=0; i<d; i++){
    ll count = 0;
    for(int j=0; j<n-1; j++){
        if(s[j][i]==s[j+1][i] && s[0][i]=='o'){
            count++;
        }
    }
    if(count==n-1){
        count1++;
        ans = max(ans, count1);
    }
    else{
        count1 = 0;
    }
  }
  cout<<ans<<endl;
}

int main(){
//   ll testcases;
//   cin>>testcases;
//   while(testcases--){
  solve();
//  }
return 0;
}