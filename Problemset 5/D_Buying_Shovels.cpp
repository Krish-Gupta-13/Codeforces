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
  ll n,k;
  cin>>n>>k;
  ll count = n;
  if(n<=k){
    cout<<1<<endl;
    return;
  }

  if(n%2==0 && k>=n/2){
    cout<<2<<endl;
    return;
  }
    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            if(k>=i){
                count = min(count, n/i);
            }
            if((n/i)<=k){
                count = min(count, i);
            }
        }
    }
        cout<<count<<endl;
}


int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}