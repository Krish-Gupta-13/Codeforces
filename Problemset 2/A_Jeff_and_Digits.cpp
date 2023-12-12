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
vector<ll> q;
int arr[100000];
ll n;
cin>>n;
vector<ll> v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
for(int i=0; i<n; i++){
    if(v[i]==5){
        count++;
    }
    else{
        count1++;
    }
}
if(count1==0){
    cout<<-1<<endl;
}
else if(count>=9 && count1>=1){
    for(int i=0; i<9*(count/9); i++){
        cout<<5;
    }
    for(int i=0; i<count1; i++){
        cout<<0;
    }
    cout<<endl;
}
else{
    cout<<0<<endl;
}
return 0;
}