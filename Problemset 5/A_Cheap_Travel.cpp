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
int arr[100000];
  ll n,m,a,b;
  cin>>n>>m>>a>>b;
  if(double(b/m)>=a){
    cout<<n*a<<endl;
  }
  else{
    while(n>m){
        count = count + b;
        n-=m;
    }
    if(n==0){
        cout<<count<<endl;
        return;
    }
    if(n<=m){
        if(n*a<b){
            count+=n*a;
        }
        else{
            count+=b;
        }
    }
    cout<<count<<endl;
  }
}


int main(){
  solve();
return 0;
}