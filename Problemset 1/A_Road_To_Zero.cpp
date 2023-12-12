// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;
// #define ll long long int
// #define llf long long float
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define nm cout<<"-1"<<endl;
// #define pb push_back
// #define pf push_front
// #define ppb pop_back
// #define ppf pop_front
// #define st sort(v.begin(), v.end());
// #define stg sort(v.begin(), v.end(), greater<>());
// #define pi  3.14 
// //Jda mt soch code krte ja//
// int main(){
// ll count = 0;
// ll count1 = 0;
// vector<ll> v;
// vector<ll> q;
// int arr[100000];
// int t;
// cin>>t;
// while(t--){
//     ll a,b;
//     cin>>a>>b;
//     ll x,y;
//     cin>>x>>y;
// //     if(x>=y){ 
// //             ll p1 = (x+y)*a;
// //             ll p2 = y*b + (x-y)*a;
// //             cout<<min(p1, p2)<<endl;  
// //     }
// //     else{  
// //         // ll p3 = (x+y)*a;
// //         ll p4 = x*b + (y-x)*a;
// // cout<<p4<<endl;
//         // cout<<min(p3, p4)<<endl;  
// //   }
// cout << min(x * a + y * a, (max(x, y) - min(x, y)) * a + min(x, y) * b) << endl;
// }
// return 0;
// }



#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define int long long
#define sz(x) (int)(x.size())
 
const long long INF = 4e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;
 
void solve() {
   int x, y; cin >> x >> y;
   int a, b; cin >> a >> b;
   cout << min(x * a + y * a, (max(x, y) - min(x, y)) * a + min(x, y) * b) << endl;;
}
 
signed main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout << fixed << setprecision(9);
   int tt = 1;
   cin >> tt;
   while (tt--) solve();
   return 0;
}