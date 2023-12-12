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
  int s,n;
  cin>>s>>n;
  vector<pair<int, int>> p;
  for(int i=0; i<n; i++){
    int x,y;
    cin>>x>>y;
    p.push_back({x,y});
    
  }
  sort(p.begin(), p.end());
  for(auto i:p){
    if(s>i.first){
        s = s+i.second;
    }
    else{
        count=1;
        break;
    }
  }
  if(count==1)
  no
  else
  yes
}


int main(){

  solve();
 
return 0;
}