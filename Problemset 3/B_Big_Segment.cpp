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
pair<ll, ll> p[n];
for(int i=0; i<n; i++){
    p[i].first=arr[i];
    p[i].second=arr1[i];
}
ll mini = INT_MAX;
ll maxi = INT_MIN;
for(ll i=0; i<n; i++){
    // cout<<p[i].first<<" "<<p[i].second<<endl;
    mini = min(mini,p[i].first);
    maxi = max(p[i].second,maxi);
}
ll index=-1;
for(ll i=0; i<n; i++){
    if((p[i].first<=mini) && (p[i].second>=maxi)){
        index = i;
    }
}
if(index==-1){
    nm
}
else{
    cout<<index+1<<endl;
}

return 0;
}