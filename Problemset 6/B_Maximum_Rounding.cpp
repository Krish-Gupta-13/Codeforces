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
#define ppb pop_back
// #define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define frr(i,a,b) for(ll i=a;i>=b;i--)
#define pi  3.14 
#define mod 1e9+7
// Jda mt soch code krte ja //

// Maths //
ll gcd(ll a, ll b){ if(b==0) return a; return gcd(b, a%b);} 
ll lcm(ll a, ll b){ return (a/gcd(a,b)*b); }

void solve(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
  string s;
  cin>>s;
  int len = s.length();
  if(s[0]>='5'){
    s = "";
    s+='1';
    for(int i=0; i<len; i++){
      s+='0';
    }
    cout<<s<<endl;
    return;
  }
  for(int i=1; i<len; i++){
    if(s[i]>='5'){
      count = i;
      break;
    }
  }
  if(count==0){
    cout<<s<<endl;
    return;
  }
    int i = count-1;
    s[i] = char((int)s[i] + 1);
    while(i>=0 && s[i]>='5' ){
      if(i==0){
        if(char((int)s[i]+1)>=5){
          s[i] = '0';
          s = '1' + s;
        }
      }
      else{
        int x = (int)s[i-1] + 1;
        s[i] = '0';
        s[i-1] = char(x);
        i--;

      }
    }
    for(int j=count; j<len+1; j++){
      s[j] = '0';
    }
  cout<<s<<endl;
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}