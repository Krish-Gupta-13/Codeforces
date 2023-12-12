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
int main(){
ll t;
cin>>t;
while(t--){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
ll arr[100000];
int n;
cin>>n;
for(ll i=0; i<n; i++){
    cin>>arr[i];
}
// for(ll i=0; i<n; i++){
//     if(arr[i]<0)
//     v.push_back(arr[i]);
//     else
//     q.push_back(arr[i]);
// }
// ll x = accumulate(v.begin(), v.end(),0);
// ll y = accumulate(q.begin(), q.end(),0);
// cout<<abs(abs(x)-abs(y))<<endl;
for(ll i=0; i<n; i++){
    count = count + arr[i];
}
cout<<abs(count)<<endl;
}
return 0;
}