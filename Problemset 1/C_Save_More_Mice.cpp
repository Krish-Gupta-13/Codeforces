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
int a=0;
vector<ll> v;
vector<ll> b;
ll q = 0;
// int arr[100000];
ll n,x;
cin>>n>>x;
for(ll i=0; i<x; i++){
    ll e;
    cin>>e;
    v.pb(e);
}
stg
// for(ll i=0; i<x; i++){
    
// }
if(v[0]==n-1 && x==1){
    cout<<0<<endl;
}
for(ll i=0; i<x; i++){
    a = n - v[i];
    if(v[i]>count){
    q++;
    count = count + a;
    }
    else{
        break;
}
}
cout<<q<<endl;
q = 0;
}
return 0;
}