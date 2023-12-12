//------------------Code bhi krle kitna game khelega---------------------------//
#include<bits/stdc++.h>
#include<iomanip>
#include<stdio.h>
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
//-----------------------Jada mt soch code krte ja------------------------------//
int main(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> b;
vector<ll> q;
int arr[100000];
ll n,x;
cin>>n>>x;
int l[100000];
int r[100000];
int c = 1;
for(int i=0; i<n; i++){
    cin>>l[i]>>r[i];
}
for(int i=0; i<=n-1; i++){
    int a = (l[i]-c)%x;
    v.pb(a);
    c = 1 + r[i]; 
    count = count + v[i];
    int t = r[i]-l[i]+1;
    b.pb(t);
    count1 = count1 + b[i];
}

// for(int i=0; i<n; i++){
//     int p = v[i]%x;
//     q.pb(p);
// }
// for(int i=0; i<n; i++){
//     count = count + v[i];
// }
// for(int i=0; i<n; i++){
//     int t = r[i]-l[i];
//     b.pb(t);
//     count1 = count1 + b[i];
// }
// for(int i=0; i<n; i++){
//     count1 = count1 + b[i];
// }
cout<<count + count1 <<endl;

return 0;
}