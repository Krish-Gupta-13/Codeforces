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
ll count1 = 0;
vector<ll> v;
vector<ll> q;
vector<ll> ans;
int arr[100000];
int arr1[100000];
ll n,m;
cin>>n>>m;
for(int i=0; i<n; i++){
    ll tlt;
    cin>>tlt;
    v.pb(tlt);
}
ll g = m;
st
while(m>0){
for(int j=0; j<n; j++){
    ll k;
    if(j==0){
        k=1;
    }
    else{
        k=v[j-1];
    }
    for(int i=k; i<v[j];){
        if(v[j]!=i){
            q.pb(i);
            m-=i;
            // k = v[j];  
            i++;
            break;
        }
        else{
            i++;
        }

    }
}
cout<<q.size()<<endl;
for(auto i:q){
    cout<<i<<" ";
}
cout<<endl;
}
return 0;
}