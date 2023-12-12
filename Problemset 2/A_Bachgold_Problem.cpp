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
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
ll n;
cin>>n;
cout<<n/2<<endl;
if(n%2==0){
    for(int i=0; i<n/2; i++){
        cout<<2<<" ";
    }
    cout<<endl;
}
else{
    for(int i=0; i<(n-1)/2 -1; i++){
    cout<<2<<" ";
    }
    cout<<3<<endl;
}
return 0;
}