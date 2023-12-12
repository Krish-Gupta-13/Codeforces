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


bool cmp(pair<ll, ll> &a, pair<ll, ll> &b){
    if(a.first<b.first)
        return a.first<b.first;
    else if(a.first==b.first)
        return b.second<a.second;
    return false;

}

void solve(){
ll count = 0;
ll count1 = 0;
  ll n;
  cin>>n;
  vector<ll> v(n);
  vector<ll> q(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  for(int i=0; i<n; i++){
    cin>>q[i];
  }
  ll maxi = INT_MIN;
  for(int i=0; i<n; i++){
    maxi = max(maxi, v[i]-q[i]);
  }
  vector<ll> ans;
  for(int i=0; i<n; i++){
    if(v[i]-q[i]==maxi){
        count++;
        ans.push_back(i+1);
    }
  }
  cout<<count<<endl;
  for(auto i:ans)
    cout<<i<<" ";
cout<<endl;
//   vector<pair<ll, ll>> p;
//   for(int i=0; i<n; i++){
//     p.push_back({v[i], q[i]});
//   }
//   sort(p.begin(), p.end(), cmp);
//   for(int i=0; i<n-1; i++){
//     if(p[i+1].first-p[i].first>=p[i+1].second-p[i].second)
//         count++;
//   }
//   cout<<count<<endl;
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}