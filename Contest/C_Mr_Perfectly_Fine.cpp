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
// #define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
//Jda mt soch code krte ja//
void solve(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> skill01;
vector<ll> skill10;
vector<ll> skill11;
vector<ll> skill00;
vector<string> st;
int arr[100000];
int n;
cin>>n;
int ans = -1;
for(int i=0; i<n; i++){
    int ele;
    cin>>ele;
    v.pb(ele);
    string s;
    cin>>s;
    st.pb(s);
}
for(int i=0; i<n; i++){
    if(st[i]=="01"){
        skill01.pb(v[i]);
    }
    else if(st[i]=="10"){
        skill10.pb(v[i]);
    }
    else if(st[i]=="11"){
        skill11.pb(v[i]);
    }
    else{
        skill00.pb(v[i]);
    }
}
if(skill00.size()==n){
    nm
    return;
}
if(skill01.empty() && skill11.empty() && skill10.empty()){
    cout<<-1<<endl;
    return;
}
sort(skill01.begin(), skill01.end());
sort(skill10.begin(), skill10.end());
sort(skill11.begin(), skill11.end());
if(skill10.size()==0 && skill01.size()==0 && skill11.size()!=0){
    cout<<skill11[0]<<endl;
    return;
}
else if(skill10.size()!=0 && skill01.size()!=0 && skill11.size()!=0){
    int aa = skill10[0]+skill01[0];
    int ab = skill11[0];
    ans = min(ab, aa);
    cout<<ans<<endl;
    return;
}
else if(skill10.size()!=0 && skill01.size()!=0 && skill11.size()==0){
    cout<<skill10[0]+skill01[0]<<endl;
    return;
}
else if(skill10.size()!=0 && skill01.size()==0 && skill11.size()!=0){
    cout<<skill11[0]<<endl;
    return;
}
else if(skill10.size()==0 && skill01.size()!=0 && skill11.size()!=0){
    cout<<skill11[0]<<endl;
    return;
}
else{
    nm
    return;
}


}


int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}