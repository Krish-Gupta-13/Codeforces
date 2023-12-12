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
vector<ll> v(4);
map<int, int> m;
for(int i=0; i<4; i++){
    cin>>v[i];
    m[v[i]]++;
}
for(auto i:m){
    if(i.second>1){
        count = count + i.second-1;
    }
}
cout<<count<<endl;
}

int main(){

  solve();

return 0;
}