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
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
ll x;
cin>>x;
if(x<=1399){
    cout<<"Division 4"<<endl;
}
else if(x>1399 && x<=1599){
    cout<<"Division 3"<<endl;
}
else if(x>1599 && x<1900){
    cout<<"Division 2"<<endl;
}
else{
    cout<<"Division 1"<<endl;
}
}
return 0;
}