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
int chef[100000];
int chefina[100000];
int n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>chef[i];
}
for(int i=0; i<n; i++){
    cin>>chefina[i];
}
for(int i=0; i<n; i++){
    if(chef[i]>0 && chefina[i]>0){
        count++;
        v.pb(count);
    }
    else{
        count=0;
    }
}
stg
if(v.size()==0)
cout<<0<<endl;
else
cout<<v[0]<<endl;
}
return 0;
}