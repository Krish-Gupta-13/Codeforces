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
ll count;
ll count1 = 0;
vector<ll> v;
int arr[100000];
  int n;
  cin>>n;
  for(int i=1; i<=n; i++){
    cin>>arr[i];
  }
  for(int i=1; i<=n; i++){
    int ans = abs(arr[i]-i);
    if(ans!=0){
      v.push_back(ans);
    }
  }
  count = v[0];
  for(auto i:v){
    count = __gcd(count, i);
  }
  cout<<count<<endl;
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}