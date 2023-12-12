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
//Jda mt soch code krte ja//
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
ll x = n;
ll res = 0;
while(n>0){
    if((9-n%10)>n%10){
        res = res*10 + n%10;
        n/=10;
    }
    else{
        res = res*10 + (9-n%10);
        n/=10;
    }
    count++;
}
ll a = pow(10,count);
if(x/a==0){
    res = x/a * a + x%a;
}
cout<<res<<endl;
return 0;
}