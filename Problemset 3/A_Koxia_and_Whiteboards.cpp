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
vector<ll> arr;
vector<ll> arr1;
ll n,m;
cin>>n>>m;
for(ll i=0; i<n+m; i++){
    ll ele;
    cin>>ele;
    arr.pb(ele);
}
    sort(arr.begin(),arr.end()-1);
	reverse(arr.begin(),arr.end());
for(int i=0; i<n; i++){
    count = count + arr[i];
}bbbb
    cout<<count<<endl;
}
return 0;
}