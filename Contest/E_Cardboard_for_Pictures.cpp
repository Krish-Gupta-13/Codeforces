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

int dfs(ll mid, vector<ll> &v, ll c){
    ll count = 0;
    ll n = v.size();
    for(int i=0; i<n; i++){
        ll x = v[i]+(mid);
        count+= (x*x);
        if(count>c){
            return 2;
        }   
    }
    return 1;
}

void solve(){
  ll n, c;
  cin>>n>>c;
vector<ll> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  ll e = sqrt(c);
  e++;
  ll ans = 0;
  ll s = 0;
  while(s<=e){
    ll mid = s+(e-s)/2;
  
  if(dfs(mid, v, c)==1){
        s = mid+1;
    }
    else if(dfs(mid, v, c)==2){
        e = mid-1;
    }
  }
  cout<<s/2<<endl;
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}


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



// void solve(){
//   ll n, c;
//   cin>>n>>c;
//   ll ans = 0;
// vector<ll> v(n);
//   for(int i=0; i<n; i++){
//     cin>>v[i];
//   }
//   ll e = 1e9;
//   ll s = 0;
//   while(s<=e){
//     ll mid = s + (e-s)/2;
//     ll count = 0;
//     for(int i=0; i<n; i++){
//         count = count + (ll)pow(v[i]+mid, 2);
//         if(count>c){
//           break;
//         }
//     }
//     if(count>c){
//       e = mid-1;
//     }   
//     else{
//       ans = mid/2;
//         s = mid+1;
        
//     }
//   }
//   cout<<ans<<endl;
// }

// int main(){
//   ll testcases;
//   cin>>testcases;
//   while(testcases--){
//   solve();
//  }
// return 0;
// }