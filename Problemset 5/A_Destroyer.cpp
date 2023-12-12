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
ll count = INT_MAX;
ll count1 = 0;
vector<ll> v;
int arr[100000];
  ll n;cin>>n;
  map<int, int> m;
  for(int i=0; i<n; i++){
    cin>>arr[i];
    m[arr[i]]++;
  }
  int j = 0;
  for(auto i:m){
    if(i.first!=j){
        no
        return;
    }
    else if(i.second>count){
        no
        return;
    }
    count = i.second;
    j++;
    // v.push_back(i.second);
  }
yes
// for(int i=0; i<m.size(); i++){
//     auto it = m;
//     if(it.first!=i){
//         no
//         return;
//     }
// }




//   for(auto i:m){
//     cout<<i.first<<" "<<i.second<<endl;
//   }
//   for(int i=0; i<v.size()-1; i++){
//     if(v[i+1]<v[i]){
//         no
//         return;
//     }
//   }
//   yes
// cout<<endl;
}


int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}