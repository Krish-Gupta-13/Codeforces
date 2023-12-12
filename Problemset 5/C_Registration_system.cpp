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
// #define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
//Jda mt soch code krte ja//
void solve(){
ll count = 0;
ll count1 = 0;
vector<string> v;
int arr[100000];
  ll n;
  cin>>n;
  map<string, int> m;
  vector<string> ans;
  for(int i=0; i<n; i++){
    string s;
    cin>>s;
    if(m.find(s)==m.end()){
        ans.push_back("OK");
        m[s]++;
    }
    else{
        int a = m[s];
        string st = to_string(a);
        ans.push_back(s+st);
        m[s]++;
    }
    }
    for(auto i:ans){
        cout<<i<<endl;
    }
}



int main(){
  solve();
  
return 0;
}