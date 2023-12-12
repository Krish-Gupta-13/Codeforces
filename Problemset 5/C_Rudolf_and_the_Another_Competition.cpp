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

bool cmp(vector<ll> &a, vector<ll> &b){
    if(a[0]!=b[0])
        return a[0]>b[0];
    else if(a[0]==b[0]){
        if(a[1]!=b[1])
            return a[1]<b[1];
        else
            return a[2]<b[2];
    }
    return true;
}


void solve(){

vector<ll> v;
vector<ll> q;
vector<vector<ll>> vv;
  ll n,m,h;
  cin>>n>>m>>h;
    for(int i=0; i<n; i++){
        vector<ll> arr(m);
        for(int j=0; j<m; j++)
            cin>>arr[j];
        ll count1 = 0;
        ll sum = 0;
        ll count = 0;
        sort(arr.begin(), arr.end());
        for(int j=0; j<m; j++){
            if(sum+arr[j]>h)
                break;
            sum = sum+arr[j];
            count = count + sum;
            count1++;
        }
        vv.push_back({count1, sum, i+1});
  }

  sort(vv.begin(), vv.end(), cmp);
  for(int i=0; i<vv.size(); i++){
    if(vv[i][2]==1){
        cout<<i+1<<endl;
    }
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










