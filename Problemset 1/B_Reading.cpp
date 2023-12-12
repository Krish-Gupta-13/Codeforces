// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
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
// int n,k;
// int count = 0;
// cin>>n>>k;
// ll a,q;
// vector<ll> b;
// vector<ll> v;
// vector<ll> y;
// for(ll i=0; i<n; i++){
//     ll element;
//     cin>>element;
//     v.pb(element);
// }
// for(ll i=0; i<n; i++){
//     ll q = v[i];
//     b.pb(q);
//     if(b[0]==b[1]){
//         i++;
//     }
//     else{
//         count = b[i+1];
//         continue;
//     }
// }
// // stg
// sort(b.begin(), b.end());
// for(ll i=0; i<b.size(); ){
// }
// cout<<count<<endl;
// // int z;
// // z = b[k-1];
// // cout<<z;
// // cout<<endl;

// // for(auto i:b){
// //     cout<<i<<" ";
// // }

// for(int i=1; i<=n;){
//     if(v[i]>=count){
//         y.pb(i);
//         i++;
//     }
//     else{
//         i++;
//     }
// }

// for(auto i:y){
//     cout<<i<<" ";
// }
// // cout<<endl;


// // for(int i=0; i<k; i++){
// //     a = v[i];
// //     b.pb(a);

// // }

// // cout<<endl;


// // for(auto i:b){
// //     cout<<i<<" ";
// // }


// // cout<<endl;
// // sort(arr, arr+n);



// return 0;
// }
#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define el "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
const long double PI = 3.14159265358979323846;
const int T = 1e3 + 2;
const int TT = 1e4 + 2;
const int HT = 1e5 + 2;
const int THT = 2e5 + 2;
const int M = 1e6 + 2;
const int B = 1e9 + 2;
 
int main() {
    fast
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    pair<int, int> arr[T];
    int n, k;
    cin >> n >> k;
 
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        arr[i] = {temp, i + 1};
    }
 
    sort(arr, arr + n);
 
    vector<int> ans;
    for (int i = (n - k); i < n; ++i) {
        ans.push_back(arr[i].second);
    }
 
    sort(ans.begin(), ans.end());
 
    cout << arr[n - k].first << el;
    for (auto i: ans) {
        cout << i << " ";
    }
 
    return 0;
}