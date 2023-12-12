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
ll count = 1;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
vector<ll> ans;
int arr[100000];
int arr1[100000];
ll n;
cin>>n;
for(int i=0; i<2*n; i++){
    cin>>arr[i];
    cin>>arr1[i];
}
pair<ll, ll> p[n];
for(int i=0; i<n; i++){
    p[i].first=arr[i];
    p[i].second=arr1[i];
}
for(int i=0; i<n; i++){
    if(p[i].F==p[i+1].F && p[i].S==p[i+1].S){
        count++;
    }
    else{
        v.pb(count);
        count = 1;
    }
}
// for(auto i:v){
//     cout<<i<<" ";
// }
stg
cout<<v[0]<<endl;
// cout<<1+count<<endl;
return 0;
}