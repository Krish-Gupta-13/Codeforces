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
ll n,e,s,w,t;
cin>>n>>e>>s>>w>>t;
if(w<=n && w<=s && w<=e){
    cout<<"West"<<endl;
    cout<<t-(w*(t/100))-5<<endl;
}
else if(s<=e && s<=n && s<=w){
    cout<<"South"<<endl;
    cout<<t-(s*(t/100))-5<<endl;
}
else if(n<=e && n<=s && n<=w){
    cout<<"North"<<endl;
    cout<<t-(n*(t/100))-5<<endl;
}
else{
    cout<<"East"<<endl;
    cout<<t-(e*(t/100))-5<<endl;
}



return 0;
}