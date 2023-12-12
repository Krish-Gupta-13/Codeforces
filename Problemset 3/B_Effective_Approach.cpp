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
for(ll i=0; i<n; i++){
    ll ele;
    cin>>ele;
    v.pb(ele);
    // cin>>arr[i];
}
ll m;
cin>>m;
for(ll i=0; i<m; i++){
    // cin>>arr1[i];
    ll ele;
    cin>>ele;
    q.pb(ele);
}
for(ll j=0; j<m;){
    for(ll i=0; i<n; i++){
        if(v[i]==q[j]){
            count++;
            j++;
            break;
        }
        else{
            count++;
        }
    }
}
for(ll j=0; j<m;){
    for(ll i=n-1; i>=0; i--){
        if(v[i]==q[j]){
            count1++;
            j++;
            break;
        }
        else{
            count1++;
        }
    }
}
cout<<count<<" "<<count1<<endl;
return 0;
}