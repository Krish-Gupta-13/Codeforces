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
// vector<ll> v;
int arr[100000];
  int n,m;
  cin>>n>>m;
  vector<string> v1;
  vector<string> v2;
  vector<string> v;
  vector<string> ans;
  for(int i=0; i<m; i++){
    string s1,s2;
    cin>>s1>>s2;
    v1.push_back(s1);
    v2.pb(s2);
  }
  for(int i=0; i<n; i++){
    string ele;
    cin>>ele;
    v.pb(ele);
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(v[i]==v1[j]){
            if(v1[j].length()<=v2[j].length()){
                ans.push_back(v1[j]);
            }
            else{
                ans.pb(v2[j]);
            }
        }
    }
  }
  for(auto i:ans){
    cout<<i<<" ";
  }
  cout<<endl;
}


int main(){
  solve();
return 0;
}