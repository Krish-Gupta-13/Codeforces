//------------------Code bhi krle kitna game khelega---------------------------//
#include<bits/stdc++.h>
#include<iomanip>
#include<stdio.h>
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
//-----------------------Jada mt soch code krte ja------------------------------//
int main(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
ll n,k;
cin>>n>>k;
if((n+1)/2>=k) cout<< 2*k -1 <<endl;
else cout<<2*(k-(n+1)/2)<<endl;

return 0;
}