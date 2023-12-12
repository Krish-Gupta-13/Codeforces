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
ll n;
cin>>n;
ll arr[n];
ll arr1[n];
for(ll i=0; i<n; i++){
    cin>>arr[i];
    arr1[i]=arr[i];
}
sort(arr1,arr1+n, greater<int>());
ll maxi=arr1[0];
ll secmaxi=arr1[1];
ll index;
for(ll i=0; i<n; i++){
    if(arr[i]==maxi){
        index=i;
    }
}
for(ll i=0; i<n; i++){
    if(i==index){
        cout<<arr[i]-secmaxi<<" ";
    }
    else{
        cout<<arr[i]-maxi<<" ";
    }
}
cout<<endl;
}
return 0;
}