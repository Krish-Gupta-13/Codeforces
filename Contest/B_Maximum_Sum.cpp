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
ll ans = 0;
vector<ll> v;
int arr[100000];
  int n,k;
  cin>>n>>k;
  for(ll i=0; i<n; i++){
    ll ele;
    cin>>ele;
    v.push_back(ele);
  }
ll ans3 = 0;
ll ans2 = 0;
stg
if(k==1){
    if(v[0]<v[v.size()-1]+v[v.size()-2]){
            v.erase(v.begin());
        }
        else{
            int x = v[v.size()];
            v.pop_back();
            v.pop_back();
        }
    for(int i=0; i<v.size(); i++){
    ans = ans+v[i];
    }
    cout<<ans<<endl;
    return;
}
vector<int> z;
for(int i=0; i<n; i++){
    z.push_back(v[i]);
}
sort(z.begin(), z.end());

for(int i=0; i<k; i++){
    ans2 = ans2 + v[i];
}
for(int i=0; i<2*k; i++){
    ans3 = ans3 + z[i];
}
for(ll i=0; i<n; i++){
    if(count==k){
        break;
    }
    else{
        if(v[0]<v[v.size()-1]+v[v.size()-2]){
            v.erase(v.begin());
        }
        else{
            int x = v[v.size()];
            v.pop_back();
            v.pop_back();
        }
    }
    count++;
}
  for(int i=0; i<v.size(); i++){
    ans = ans+v[i];
  }
//   ll ans1 = min(ans2, ans3);
  ll rans = max({ans,ans2,ans3});
  if(n>k+(2*k))
  cout<<rans<<endl;
  else
  cout<<ans<<endl;
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}