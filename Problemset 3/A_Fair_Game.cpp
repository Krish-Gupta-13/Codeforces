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
for(int i=0; i<n; i++){
    cin>>arr[i];
}

pair<int, int> p[n];
unordered_map<int, int> mp;
for(int i=0; i<n; i++){
    mp[arr[i]]++;
}
for(auto i:mp){
    v.push_back(i.first);
    q.push_back(i.second);
}
for(int i=0; i<v.size(); i++){
    p[i].first=v[i];
    p[i].second=q[i];
}
ll len = v.size();
for(int i=0; i<len; i++){
    for(int j=i+1; j<len; j++){
        if(p[i].second==p[j].second){
            count=p[i].first;
            count1=p[j].first;
        }
        else{
            count=-1;
        }
    }
}
if(count==-1 || count==0){
    no
}
else{
    yes
cout<<count<<" "<<count1<<endl;
}

return 0;
}