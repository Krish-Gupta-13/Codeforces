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
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
  ll n;
  cin>>n;
  int odd = 0;
  int even = 0;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  for(int i=0; i<n; i++){
    if(arr[i]&1)
        q.pb(arr[i]);
    else 
        v.pb(arr[i]);
  }
  if(q.size()==1){
    for(int i=0; i<n; i++){
        if(q[0]==arr[i]){
            cout<<i+1<<endl;
            return;
        }
    }
  }
  else{
    for(int i=0; i<n; i++){
        if(v[0]==arr[i]){
            cout<<i+1<<endl;
            return;
        }
    }
  }

}


int main(){
  solve();
  
return 0;
}