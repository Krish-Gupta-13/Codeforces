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
void solve(){
// ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
ll n;
cin>>n;
for(int i=0; i<n; i++){
    ll ele;
    cin>>ele;
    v.pb(ele);
}
q = v;
sort(q.begin(), q.end());
for(int i=1; i<n; i++){
    v[i] = v[i] + v[i-1];
    q[i] = q[i] + q[i-1];
}
ll m;
cin>>m;
for(int i=0; i<m; i++){
    vector<int> arr;
    for(int j=0; j<3; j++){
        int ele;
        cin>>ele;
        arr.pb(ele);
    }
    if(arr[0]==1){
        if(arr[1]==1)
            cout<<v[arr[2]-1]<<endl;
        else
            cout<<v[arr[2]-1]-v[arr[1]-2]<<endl;
    }
    else{
        if(arr[1]==1)
            cout<<q[arr[2]-1]<<endl;
        else
            cout<<q[arr[2]-1]-q[arr[1]-2]<<endl;
    }
}
  
}


int main(){
//   ll testcases;
//   cin>>testcases;
//   while(testcases--){
  solve();
//  }
return 0;
}