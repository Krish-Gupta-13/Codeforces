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
// vector<ll> ans;
int arr[100000];
int arr1[100000];
ll n;
cin>>n;
for(ll i=0; i<n; i++){
    cin>>arr[i];
}
for(ll i=0; i<n-1; i++){
    count =  count + arr[i]-arr[i+1];
    // count1 = max(count1,count);
}
if(count>0){
    cout<<arr[0]<<endl;
}
else{
    cout<<abs(count-arr[0])<<endl;
}
return 0;
}


// WRONG SOLUTION