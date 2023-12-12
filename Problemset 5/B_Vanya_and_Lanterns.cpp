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
  ll n, l;
  cin>>n>>l;
  double arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  sort(arr, arr+n);
  double ans = 0;
  for(int i=0; i<n-1; i++){
    ans = max(ans, arr[i+1]-arr[i]);
  }
  double a = ans/2;
  double s = arr[0] - 0;
  double e = l - arr[n-1];
  double t = max(s,e);
  cout.precision(9);
  cout<<max(a, t);
}


int main(){
  solve();
return 0;
}