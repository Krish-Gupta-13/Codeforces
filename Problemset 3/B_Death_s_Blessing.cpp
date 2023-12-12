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
ll arr1[100000];
ll n;
cin>>n;
for(ll i=0; i<n; i++){
    // cin>>arr[i];
    int ele;
    cin>>ele;
    v.push_back(ele);
}
for(ll i=0; i<n; i++){
    // cin>>arr1[i];
    int ele;
    cin>>ele;
    q.pb(ele);
}
pair<ll, ll> p[n];
for(ll i=0; i<n; i++){
    p[i].first=q[i];
    p[i].second=v[i];
}
sort(p,p+n);
count = p[0].second;
for(ll i=1; i<n; i++){
    count = count + p[i].second + p[i-1].first;
}
cout<<count<<endl;
}
return 0;
}