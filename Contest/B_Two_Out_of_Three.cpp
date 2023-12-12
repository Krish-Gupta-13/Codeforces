//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define llf long long float
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nm cout<<"-1"<<endl;



void solve(){
ll mod = 1e9+7;
ll count = 0;
ll count1 = 0;
  ll n;
  cin>>n;
vector<ll> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  int x = -1;
  int y = -1;
  map<int, int> m;
  for(auto i:v)
    m[i]++;
for(auto i:m){
    if(i.second>1){
        if(x==-1)
            x = i.first;
        else if(x!=-1 && i.first!=x)
            y = i.first;
    }
}
bool ff1 = false;
bool ff2 = false;
for(int i=0; i<n; i++){
    if(v[i]==x && ff1==false){
        v[i]=1;
        ff1=true;
    }
    else if(v[i]==x && ff1==true){
        v[i] = 2;
    }
    else if(v[i]==y && ff2==false){
        v[i]=1;
        ff2=true;
    }
    else if(v[i]==y && ff2==true){
        v[i] = 3;
    }
}

for(int i=0; i<n; i++){
    if(v[i]!=1 && v[i]!=2 && v[i]!=3)
        v[i] = 1;
}
if(x==-1 || y==-1)
    nm
else{
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
}
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}