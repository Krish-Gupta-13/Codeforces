//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define llf long long float
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nm cout<<"-1"<<endl;
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
//Jda mt soch code krte ja//
void countfreqency(int arr[], int n){
    vector<int> v;
    int d,e;
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto x:mp){
        if(x.second%2==1){
            no
            return;
        }
    }
    yes
}   
int main(){
ll t;
cin>>t;
while(t--){
ll count = 1;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
int n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];
}


// sort(arr,arr+n);
// for(int i=0; i<n-1; i++){
//     if(arr[i]==arr[i+1]){
//         count++;
//     }
//     else{
//         count=1;
//     }
//         v.pb(count);
// }
// // for(auto i:v){
// //     cout<<i<<" ";
// // }
// // cout<<endl;

// for(int i=0; i<v.size()-1; i++){
//      if(v[i]>=v[i+1]){
//         q.push_back(v[i]);
//     }
// }
// q.push_back(v[v.size()-1]);

// // for(auto i:q){
// //     cout<<i<<" ";
// // }
// // cout<<endl;

// if(v[0]==1){
//     count=0;
// }
// if(n==1){
//     count=0;
// }

// for(int i=0; i<q.size(); i++){
//     if(q[i]%2==0){
//         count=1;
//     }
//     else{
//         count=0;
//     }
// }

// if(count==1)
// yes
// else
// no

countfreqency(arr, n);
}
return 0;
}