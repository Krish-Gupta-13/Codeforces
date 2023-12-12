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
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
vector<ll> ans;
int arr[100000];
int arr1[100000];
ll n;
cin>>n;
for(int i=0; i<n*2; i++){
    cin>>arr[i];
    cin>>arr1[i];
}
vector<pair<ll, ll>> p;
for(int i=0; i<n; i++){
    // p[i].F=arr[i];
    // p[i].S=arr1[i];
    p.pb(make_pair(arr[i],arr1[i]));
}
sort(p.begin(), p.end());
for(int i=1; i<n; i++){
    if(p[0].S<p[i].S){
        count=1;
        break;
    }
}
if(count==1)
cout<<"Poor Alex"<<endl;
else
cout<<"Happy Alex"<<endl;
return 0;
}