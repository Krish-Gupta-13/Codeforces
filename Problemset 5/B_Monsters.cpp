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

// bool cmp(pair<ll, ll> const& a, pair<ll, ll> const& b){
//     if (a.first < b.first)
//         return false;
//     else if(a.first>b.first)
//         return true;
//     return a.second<b.second;
// }

// void solve(){
// ll count = 0;
// ll count1 = 0;
//   ll n,k;
//   cin>>n>>k;
//   vector<ll> ans;
// vector<ll> v;
//   for(ll i=0; i<n; i++){
//     ll ele;
//     cin>>ele;
//     ele = ele%k;
//     v.pb(ele);
//   }

//   vector<pair<ll, ll>> pq;
//     for(ll i=0; i<n; i++){
//         pq.push_back({v[i], i+1});
//   }

//   for(int i=0; i<pq.size(); i++){
//     if(pq[i].first==0){
//         ans.pb(pq[i].second);
//     }
//   }

// sort(pq.begin(), pq.end(), cmp);

// for(auto i:pq){
//     if(i.first!=0)
//         ans.push_back(i.second);
// }
 

//   for(ll i=0; i<ans.size(); i++){
//     cout<<ans[i]<<" ";
//   }
//   cout<<endl;
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


// struct myComp {
//     constexpr bool operator()(pair<ll, ll> const& a, pair<ll, ll> const& b) const noexcept{
//         if(a.first==b.first)
//             return a.second > b.second;
//         else
//             return a.first < b.first;
//     }
// };

    struct myComp {
        bool operator()(pair<ll, ll> const& a, pair<ll, ll> const& b){
            if (a.first == b.first)
                return a.second > b.second;
            else
                return a.first < b.first;
        }
    };
void solve(){
ll count = 0;
ll count1 = 0;
  ll n,k;
  cin>>n>>k;
vector<ll> v;
  vector<ll> ans;
  for(ll i=0; i<n; i++){
    // cin>>v[i];
    ll ele;
    cin>>ele;
    ele = ele%k;
    v.pb(ele);
    if(ele==0){
        ans.pb(i+1);
    }
  }
  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, myComp> pq;
    for(ll i=0; i<n; i++){
        pq.push({v[i], i+1});
  }

  
  while(!pq.empty()){
    ll health = pq.top().first;
    ll ind = pq.top().second;
    pq.pop();
    if(health==0)
        continue;
    health = health - k;
    if(health<=0){
        ans.push_back(ind);
    }
    else{
        pq.push({health, ind});
    }
  }

  for(ll i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
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



