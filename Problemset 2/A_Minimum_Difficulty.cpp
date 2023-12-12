//------------------Code bhi krle kitna game khelega---------------------------//
#include<bits/stdc++.h>
#include<iomanip>
#include<stdio.h>
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
//-----------------------Jada mt soch code krte ja------------------------------//
int main(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
ll n;
cin>>n;
for(int i=0; i<n; i++){
    int ele;
    cin>>ele;
    q.pb(ele);
    // cin>>arr[i];
}
for(int i=2; i<n; i++){
    q.erase(remove(q.begin(), q.end(), i),q.end());
for(auto i:q){
    cout<<i<<" ";
}
cout<<endl;
    // int a = arr[i+2]-arr[i];
    // v.pb(a);
}
// st
// cout<<v[0]<<endl;
return 0;
}