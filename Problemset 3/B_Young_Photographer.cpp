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
int arr[100000];
int arr1[100000];
ll n, x;
cin>>n>>x;

for(int i=0; i<2*n; i++){
    cin>>arr[i];
}

for(int i=0; i<2*n-1; i=i+2){
    if(arr[i]<arr[i+1]){
        v.pb(arr[i]);
        q.push_back(arr[i+1]);
    }
    else{
        v.pb(arr[i+1]);
        q.pb(arr[i]);
    }
}
stg
sort(q.begin(), q.end());
if(v[0]>q[0]){
    nm
}
else if(x>=v[0] && x<=q[0]){
    cout<<0<<endl;
}
else{
    cout<<min(abs(x-q[0]),abs(v[0]-x))<<endl;
}
return 0;
}