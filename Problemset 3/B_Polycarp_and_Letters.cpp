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
string s;
cin>>s;
set<int> stt;
// if(n==1 && s[0]>96 && s[0]<123){
//     cout<<1<<endl;
// }
// else{
for(int i=0; i<n; i++){
    if(s[i]>96 && s[i]<123){
        stt.insert(s[i]);
        v.pb(stt.size());
    }
    else{
        stt.clear();
    }
// }
}
stg
if(v.size()==0){
    cout<<0<<endl;
}
else{
    cout<<v[0]<<endl;
}
return 0;
}