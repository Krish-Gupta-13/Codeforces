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
set<char> s;
int arr[100000];
string a,b;
cin>>a>>b;
set<string> aa;

sort(a.begin(), a.end());
sort(b.begin(), b.end());
for(int i=0; i<a.length(); i++){
    char x = a[i]
    aa.insert(x);
}
    for(int j=0; j<b.length(); j++){
        if(a[i]!=b[j]){
            s.insert(a[i]);
        }
    }
for(auto i:s){
    cout<<i;
}
cout<<endl;
return 0;
}