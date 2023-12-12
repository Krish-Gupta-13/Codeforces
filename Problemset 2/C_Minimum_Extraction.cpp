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
int n;
cin>>n;
for(int i=0; i<n; i++){
    // cin>>arr[i];
    int ele;
    cin>>ele;
    q.pb(ele);
}
if(n==1){
    cout<<q[0]<<endl;
}
else{
    int x = INT_MAX;
    while(n>1){
        for(int i=0; i<n; i++){
            if(q[i]<x){
                x = q[i];
                v.push_back(x);
                auto it = std::find(q.begin(), q.end(), x);
    if(it != q.end())
    q.erase(it);
                q[i]=q[i]-x;
                n--;
            }
        }
        stg
        cout<<v[0]<<endl;
    }
}
}
return 0;
}