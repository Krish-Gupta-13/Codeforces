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
  ll n;
  cin>>n;
  vector<bool> visited(n+1, false);
//   for(int i=n; i>0; i--){
//     int a = i;
//     if(a%2==0 && !visited[a]){
//         while(a>0 && !visited[a]){
//             v.pb(a);
//             visited[a] = 1;
//             if(!visited[a/2]){
//                 v.pb(a/2);
//                 visited[a/2] = 1;
//             }
//             a = a/2;
//             if(a&1)
//                 break;
//         }
//         // v.pb(i/2);
//         // v.push_back(i);
//         // visited[i] = true;
//         // visited[i/2] = 1;
//     }
//   }
//   for(int i=n; i>0; i--){
//     if(!visited[i]){
//         v.pb(i);
//         visited[i] = 1;
//     }
//   }

    for(int i=1; i<=n; i++){
        if(!visited[i]){
            for(int j=i; j<=n; j=j*2){
                visited[j] = 1;
                v.pb(j);
            }
        }
    }
  for(auto i:v){
    cout<<i<<" ";
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