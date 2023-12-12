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
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
//Jda mt soch code krte ja//
void solve(){
ll count1 = 0;
vector<ll> v;
  ll n;
  cin>>n;
  ll count = n;
vector<ll> arr;
  for(ll i=0; i<n; i++){
    ll ele;
    cin>>ele;
    arr.pb(ele);
  }
  string s = "1";
  // v.push_back(arr[0]);
  ll prev = arr[0];
  for(ll i=1; i<n; i++){
    if(arr[i]>=prev){
        prev = arr[i];
        s+="1";
    }
    else if(arr[i]<=arr[0]){
        count = i;
        prev = arr[i];
        s+="1";
        break;
    }
    else{
      s+="0";
    }
  }
  for(ll i=count+1; i<n; i++){
    if(arr[i]<=arr[0] && arr[i]>=prev){
        prev = arr[i];
        s+="1";
    }
    else{
        s+="0";
    }
  }
  cout<<s<<endl;
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
  
return 0;
}


// #include <bits/stdc++.h>
// using namespace std; 
 
// //ios_base::sync_with_stdio(false);
// //cin.tie(NULL);
 
// // Operator overloads
// template <typename T1, typename T2> // cin >> pair<T1, T2>
// istream& operator>>(istream& istream, pair<T1, T2>& p)
// {
//     return (istream >> p.first >> p.second);
// }
// template <typename T> // cin >> vector<T>
// istream& operator>>(istream& istream, vector<T>& v)
// {
//     for (auto& it : v)
//         cin >> it;
//     return istream;
// }
// template <typename T1, typename T2> // cout << pair<T1, T2>
// ostream& operator<<(ostream& ostream, const pair<T1, T2>& p)
// {
//     return (ostream << p.first << " " << p.second);
// }
// template <typename T> // cout << vector<T>
// ostream& operator<<(ostream& ostream, const vector<T>& c)
// {
//     for (auto& it : c)
//         cout << it << " ";
//     return ostream;
// }
 
 
// #define ll long long
// #define mod 1000000007
// #define endl '\n' 
 
// #define f(i,st,lst) for(ll i=st;i<=lst;i++)
// #define fr(i,lst,st) for(ll i=lst;i>=st;i--)
// #define fauto(itx) for (auto it : itx)
// #define frauto(itx) for(auto it=itx.rbegin();it!=itx.rend();it++)
// #define fit(i,st,lst,x) for(ll i=st;i<=lst;i+=x)
// #define frit(i,lst,st,x) for(ll i=lst;i>=st;i-=x)
 
 
// #define pii pair<ll, ll>
// #define vi vector<ll>
// #define vc vector<char>
// #define vii vector<pair<ll, ll>>
// #define vvi vector<vector<ll>>
// #define vvc vector<vector<char>>
// #define mii map<ll, ll>
// #define mci map<char, ll>
// #define mic map<ll, char>
// #define si set<ll>
// #define msi multiset<ll>
// #define sc set<char>
// #define MAX(a, b, c) max(a, max(b, c))
// #define pb push_back
// #define all(x) begin(x), end(x)
// #define allr(x) rbegin(x), rend(x)
 
 
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     ll t,n;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         ll last=-1;
//         ll first=-1;
//         string ans = "";
//         vi v(n);
//         cin>>v;
//         ll done=0;
//         f(i,0,n-1){
//             if(first==-1){
//                 first=v[i];
//                 last=v[i];
//                 ans += "1";
//                 continue;
//             }
//             if(done==0){
//                 if(v[i]>=last){
//                     ans += "1";
//                     last = v[i];
//                 }
//                 else if(v[i]<=first){
//                     ans += "1";
//                     done=1;
//                     last = v[i];
//                 }
//                 else{
//                     ans += "0";
//                 }
//             }
//             else{
//                 if(v[i]>=last && v[i]<=first){
//                     ans += "1";
//                     last = v[i];
//                 }
//                 else{
//                     ans += "0";
//                 }
//             }
//         }
//         cout<<ans<<endl;
//     }
// }