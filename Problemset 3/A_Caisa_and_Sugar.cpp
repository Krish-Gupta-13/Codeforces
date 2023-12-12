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
int main(){
ll count = 0;
ll count1 = -1;
vector<ll> v;
vector<ll> q;
vector<ll> ans;
int arr[100000];
int arr1[100000];
ll n,s;
cin>>n>>s;
for(int i=0; i<2*n; i++){
    cin>>arr[i];
    cin>>arr1[i];
}
pair<ll, ll> p[n];
for(int i=0; i<n; i++){
    p[i].first==arr[i];
    p[i].S=arr1[i];
}
for(int i=0; i<n; i++){
    if(p[i].first>s){
        count1++;
        // break;
    }
}
ll m=INT_MAX ,b=INT_MAX;
for(int i=0; i<n; i++){
    if(p[i].first<=s && p[i].S!=0){
        m=min(m,p[i].F);
        b=min(b,p[i].S);
    }
}
// cout<<count1<<endl;
// if(count1==n){
//     cout<<-1<<endl;
// }
// else{
//     cout<<100-b<<endl;
// }
if(m>s){
    cout<<"-1"<<endl;
}
else{
    cout<<100-b<<endl;
}


return 0;
}