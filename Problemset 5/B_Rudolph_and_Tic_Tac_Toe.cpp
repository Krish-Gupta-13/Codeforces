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
  string a,b,c;
  cin>>a>>b>>c;
    if(a[0]==a[1] && a[1]==a[2] && a[2]!='.'){
        cout<<a[0]<<endl;
        // return;
    }
    else if(b[0]==b[1] && b[1]==b[2] && b[2]!='.'){
        cout<<b[0]<<endl;
        // return;
    }
     else if(c[0]==c[1] && c[1]==c[2] && c[2] !='.'){
        cout<<c[0]<<endl;
        // return;
    }
    else if(a[0]==b[1] && b[1]==c[2] && c[2]!='.'){
        cout<<a[0]<<endl;
        // return;
    }
    else if(a[2]==b[1] && b[1]==c[0] && a[2]!='.'){
        cout<<a[2]<<endl;
        // return;
    }
    else if(a[0]==b[0] && b[0]==c[0] && a[0]!='.'){
        cout<<a[0]<<endl;
        // return;
    }
    else if(a[1]==b[1] && b[1]==c[1] && a[1]!='.'){
        cout<<a[1]<<endl;
        // return;
    }
    else if(a[2]==b[2] && b[2]==c[2] && a[2]!='.'){
        cout<<a[2]<<endl;
        // return;
    }
    else{
        cout<<"DRAW"<<endl;
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