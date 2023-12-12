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
map<int, int> m;
int arr[100000];
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  for(int i=0; i<n; i++){
    m[arr[i]]++;
  }
  int x = m.size();
  if(n%2==0 && x%2==0 || n%2==1 && x%2==1){
    cout<<m.size()<<endl;
  }
  else{
    cout<<m.size()-1<<endl;
  }
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}