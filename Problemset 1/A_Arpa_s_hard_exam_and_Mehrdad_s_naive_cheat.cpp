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
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
int n;
cin>>n;
if(n==0){
    cout<<1<<endl;
}
else if(n==1 || n%4==1){
    cout<<8<<endl;
}
else if(n==2 || n%4==2){
    cout<<4<<endl;
}
else if(n==3 || n%4==3){
    cout<<2<<endl;
}
else if(n==4 || n%4==0){
    cout<<6<<endl;
}
return 0;
}