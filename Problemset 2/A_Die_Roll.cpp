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
// ll t;
// cin>>t;
// while(t--){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
int a,b;
cin>>a>>b;
int t = max(a,b);
if(t==1){
    cout<<"1/1"<<endl;
}
else if(t==2){
    cout<<"5/6"<<endl;
}
else if(t==3){
    cout<<"2/3"<<endl;
}
else if(t==4){
    cout<<"1/2"<<endl;
}
else if(t==5){
    cout<<"1/3"<<endl;
}
else{
    cout<<"1/6"<<endl;
}
return 0;
}