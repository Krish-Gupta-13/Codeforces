
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define llf long long float
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pb push_back
#define ppb pop_back

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
  int n = s.length();
  if(s=="()"){
    no
    return;
  }
  string ans = "";
  for(int i=0; i<n; i++){
    if(s[i]=='('){
        count++;
    }
    else{
        count1++;
    }
  }
  for(int i=0; i<n; i++){
    ans = ans + "()";
  }
  string sol = "";
  if(ans.find(s)!=string::npos){
    for(int i=0; i<n; i++){
        sol+='(';
    }
    for(int i=0; i<n; i++){
        sol+=')';
    }

  }
  else{
    yes
    cout<<ans<<endl;
    return;
  }
  yes
  cout<<sol<<endl;
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}