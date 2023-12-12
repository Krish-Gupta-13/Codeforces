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
  string s;
  cin>>s;
  int n = s.length();
  for(int i=0; i<n-1; i++){
    if(s[i]==s[i+1]){
        count++;
    }
  }
  if(count == n-1)
    nm
  else
    cout<<n-1<<endl;
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}