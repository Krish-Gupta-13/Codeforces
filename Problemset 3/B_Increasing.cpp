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
ll n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
if(n==1){
    yes
    continue;
}
sort(arr,arr+n);
for(int i=0; i<n-1; i++){
    if(arr[i]==arr[i+1]){
        count = -1;
        break;
    }
    else{
        count = 1;
    }
}
if(count==1){
    yes
}
else{
    no
}
}
return 0;
}