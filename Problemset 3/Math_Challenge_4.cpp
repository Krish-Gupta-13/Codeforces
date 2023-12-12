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
ll x,y,n;
cin>>x>>y>>n;
// ll a = n/x;
// ll b = n/y;
// ll c = n/(x*y);
// if(x<=n/2 && y<=n/2){
// if(x==y){
//     cout<<n/x<<endl;
// }
// else if(x>y && x%y==0){
//     cout<<n/y<<endl;
// }
// else if(x<y && y%x==0){
//     cout<<n/x<<endl;
// }
// else{
//     cout<<a+b-c<<endl;
// } 
// }
// else{
//     if(x<=n/2 && y>n/2){
//         cout<<n/x<<endl;
//     }
//     else if(y<=n/2 && x>n/2){
//         cout<<n/y<<endl;
//     }    
//     else{
//         cout<<1<<endl;
//     }
// }
set<ll> s;
for(ll i=1; i<=n/x+1; i++){
    if(x*i<=n){
        s.insert(x*i);
    }
    else{
        break;
    }
}
for(ll i=1; i<=n/y+1; i++){
    if(y*i<=n){
        s.insert(y*i);
    }
    else{
        break;
    }
}
cout<<s.size()<<endl;
return 0;
}