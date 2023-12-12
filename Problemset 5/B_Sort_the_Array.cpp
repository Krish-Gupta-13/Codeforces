//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define llf long long float
#define yes cout<<"yes"<<endl;
#define no cout<<"no"<<endl;
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
  ll n;
  cin>>n;
  vector<ll> q(n);
  vector<ll>:: iterator it;
  for(ll i=0; i<n; i++){
    cin>>q[i];
  }
  bool flag = true;
  vector<ll> v = q;
  st
  for(int i=0; i<n; i++){
    if(v[i]!=q[i]){
        it = find(q.begin(), q.end(), v[i]);
        int index = it - q.begin();
        reverse(v.begin()+i, v.begin()+index+1);
        count = i;
        count1 = index;
        break;
    }
  }
  for(int i=0; i<n; i++){
    if(v[i]!=q[i]){
        flag = false;
        break;
    }
  }
  if(flag){
    yes
    cout<<count+1<<" "<<count1+1<<endl;
  }
  else{
    no
  }







//   map<ll, ll> m;
//   for(int i=0; i<n; i++){
//     m[abs(q[i]-v[i])]++;
//     if(count==0 && q[i]-v[i]!=0)
//         count = i+1;
//     if(q[i]-v[i]!=0)
//         count1 = i+1;
//   }
//   for(auto i:m){
//     if((i.second)%2==1 && i.first!=0){
//         no
//         return;
//     }
//   }
//     yes
//     if(count==0 && count1==0)
//         cout<<1<<" "<<1<<endl;
//     else
//         cout<<count<<" "<<count1<<endl;
//     return;
}


int main(){
  solve();
return 0;
}