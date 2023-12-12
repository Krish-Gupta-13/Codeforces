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
// ll t;
// cin>>t;
// while(t--){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
ll n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
    if(n==1 && arr[0]!=1){
        count = 1;
    }
sort(arr, arr+n);
for(int i=0; i<n-1; i++){
    if(arr[0]!=1){
        count = 1;
    }
    else if(arr[n-1]==n){
        count = 0;
    }
    // else if(n==1 && arr[0]!=1){
    //     count = 1;
    // }

    else if(arr[i]+1!=arr[i+1]){
        count = arr[i]+1;
        v.pb(count);
    }
}
st
// for(auto i:v){
//     cout<<i<<" ";
// }
// cout<<endl;
if(count==1){
    cout<<1<<endl;
}
else if(count==0){
    cout<<n+1<<endl;
}
else{
    cout<<v[0]<<endl;
}
return 0;
}