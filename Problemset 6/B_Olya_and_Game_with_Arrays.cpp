// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;
// #define ll long long int
// #define llf long long float
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define nm cout<<"-1"<<endl;
// #define F first 
// #define S second
// #define pb push_back
// #define ppb pop_back
// #define st sort(v.begin(), v.end());
// #define stg sort(v.begin(), v.end(), greater<>());
// #define fr(i,a,b) for(ll i=a;i<b;i++)
// #define frr(i,a,b) for(ll i=a;i>=b;i--)
// #define pi  3.14 
// #define mod 1e9+7
// // Jda mt soch code krte ja //

// // Maths //
// ll gcd(ll a, ll b){ if(b==0) return a; return gcd(b, a%b);} 
// ll lcm(ll a, ll b){ return (a/gcd(a,b)*b); }

// bool cmp(const vector<ll> &a, const vector<ll> &b){
//     if(a[2]!=b[2])
//         return a[2]<b[2];
//     return a[1]<b[1];
// }

// void solve(){
// ll count = 0;
// ll count1 = 0;
//   ll n;
//   cin>>n;
// vector<vector<ll>> v;
//   for(int i=0; i<n; i++){
//     ll m;
//     cin>>m;
//     vector<ll> q(m);
//     for(int j=0; j<m; j++){
//         cin>>q[j];
//     }
//     sort(q.begin(), q.end());
//     if(m==2){
//         q.push_back(q[1]-q[0]);
//     }
//     else{
//         q[2] = q[1]-q[0];
//     }
//     v.push_back({q[0], q[1], q[2]});
//   }

//     sort(v.begin(), v.end(), cmp);
//     for(int i=0; i<v.size(); i++){
//         for(int j=0; j<3; j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     ll mini = INT_MAX;
//     for(int i=0; i<n; i++){
//         mini = min(mini, v[i][0]);
//     }
//     for(int i=1; i<n; i++){
//         count = count + v[i][1];
//     }
//     cout<<count+mini<<endl;
// }

// int main(){
//   ll testcases;
//   cin>>testcases;
//   while(testcases--){
//   solve();
//  }
// return 0;
// }


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

bool cmp(const vector<ll> &a, const vector<ll> &b){
    if(a[2]!=b[2])
        return a[2]<b[2];
    return a[1]<b[1];
}

void solve(){
ll count = 0;
ll count1 = 0;
  ll n;
  cin>>n;
vector<ll> v;
    ll mini = INT_MAX;
  for(int i=0; i<n; i++){
    ll m;
    cin>>m;
    vector<ll> q(m);
    for(int j=0; j<m; j++){
        cin>>q[j];
    }
    sort(q.begin(), q.end());
    ll x = q[0];
    v.pb(q[1]);
    mini = min(mini, x);
  }
// cout<<mini<<"      ";
   count = count + mini;
   st
   for(int i=1; i<v.size(); i++){
    count = count + v[i];
   }
   cout<<count<<endl;
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}