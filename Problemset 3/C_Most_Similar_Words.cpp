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
int diff(string &a, string &b, int m){
    int val = 0;
        for(int k=0; k<m; k++){
            val = abs(a[k]-b[k]) + val;
        }
        return val;
}
void solve(){
ll count = 0;
ll count1 = 0;
vector<string> v;
int arr[100000];
  int n,m;
  cin>>n>>m;
  int ans = 1e9;
  for(int i=0; i<n; i++){
    string s;
    cin>>s;
    v.push_back(s);
  }
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        ans = min(ans, (diff(v[i], v[j], m)));
    }
  }
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