//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
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
//Jda mt soch code krte ja//
int main(){
ll t;
cin>>t;
while(t--){
ll count = 0;
vector<ll> arr;
vector<int> b;
// int arr[100000];

ll n;
cin>>n;
for(ll i=0; i<n; i++){
    ll ele;
    cin>>ele;
    arr.pb(ele);
    // cin>>arr[i];1
}
sort(arr.begin(), arr.end(), greater<>());
if (n==1){
if(arr[0]>1){
    no
}
else{
    yes
}
continue;
}
if(arr[1]+1<arr[0]){
    no
}
else{
    yes
}
}
return 0;
}