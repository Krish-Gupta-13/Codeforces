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
int n,k;
cin>>n>>k;
set<int> s;
for(int i=0; i<n; i++){
    int ele;
    cin>>ele;
    v.pb(ele);
    s.insert(ele);
}
st
for(auto i:v){
    if(v[i]==v[i+1]){
        count++;
    }
}
ll y = n-count;
vector<pair<int, int>> p;
for(int i=0; i<n; i++){
    p.pb({v[i], i});
}
sort(p.begin(), p.end());
for(int i=0; i<n; i++){
    if(p[i].first!=p[i+1].first){
        q.push_back(i);
    }
}
cout<<s.size()<<endl;
if(y==k){
    yes
for(auto i:q){
    cout<<i+1<<" ";
}
cout<<endl;
}
else{
    no
}


return 0;
}