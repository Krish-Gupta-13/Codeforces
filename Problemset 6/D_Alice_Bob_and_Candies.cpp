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
ll alice = 0;
ll bob = 0;
ll count = 0;
  ll n;
  cin>>n;
vector<ll> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  bool flag = true;
  int i = 0;
  int j = n-1;
  ll prev = -1;
  ll sum = accumulate(v.begin(), v.end(), 0LL);
  while(i<=j){
    if(flag){
        ll curr = 0;
        if(i<=j && v[i]>prev){
            alice = alice + v[i];
            flag = !flag;
            curr = v[i];
            i++;
        }
        else{
            while(i<=j && curr<=prev){
                curr = curr+v[i];
                alice = alice + v[i];
                i++;
            }
            flag = !flag;
        }
        count++;
        prev = curr;
        // cout<<prev<<endl;
    }
    else{
        ll curr = 0;
        if(i<=j && v[j]>prev){
            bob = bob + v[j];
            flag = !flag;
            curr = v[j];
            j--;
        }
        else{
            while(i<=j && curr<=prev){
                curr = curr+v[j];
                bob = bob + v[j];
                j--;
            }
            flag = !flag;
        }
        count++;
        prev = curr;
        // cout<<prev<<endl;
    }
  }
  cout<<count<<" "<<alice<<" "<<bob<<endl; 


}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}