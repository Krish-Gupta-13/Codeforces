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
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
#define mod 1e9+7
// Jda mt soch code krte ja //

bool cmp(pair<string, int>& a, pair<string, int>& b){ return a.second < b.second; }

// Conversions //
string decToBinary(int n){string s=""; int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

// Maths //
ll gcd(ll a, ll b){ if(b==0) return a; return gcd(b, a%b);} 
ll lcm(ll a, ll b){ return (a/gcd(a,b)*b); }
void solve(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
  ll a1,a2,b1,b2,c1,c2;
  cin>>a1>>a2>>b1>>b2>>c1>>c2;
  if((b1>a1 && c1>a1) || (b1<a1 && c1<a1)){
    count = min(abs(b1-a1), abs(c1-a1));
  }
  if((b2>a2 && c2>a2) || (b2<a2 && c2<a2)){
    count1 = min(abs(b2-a2), abs(c2-a2));
  }
  cout<<count1+count+1<<endl;
}


int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}