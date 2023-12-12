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
  ll n;
  cin>>n;
  vector<ll> q;
vector<ll> v(n-1);
  for(int i=0; i<n-1; i++){
    cin>>v[i];
  }
  st
  ll x = (n+1)*n/2;
  if(n==2){
    if(v[0]==1 || v[0]==2){
        yes
        return;
    }
  }
  if(n==1){
    if(v[0]==1){
        yes
        return;
    }
  }
  if(v[0]!=1 && v[v.size()-1]!=x){
    no
    return;
  }
  if(v[0]==1 && v[v.size()-1]==x){
    for(int i=0; i<v.size()-1; i++){
        ll p = abs(v[i+1]-v[i]);
        if(p>n){
            if(p%2==0){
                no
                return;
            }
            else{
                q.pb(p/2);
                q.pb(p/2+1);
            }
        }
        if(p==0){
            no
            return;
        }
        else if(p<=n){
            q.pb(p);
        }
        count1 = count1 + abs(v[i+1]-v[i]);
    }
    sort(q.begin(), q.end());
    if(q.size()>n-1){
        no
        return;
    }
    if(count1>=x || x-count1!=1){
        no

        return;
    }
    for(int i=0; i<q.size()-1; i++){
        if(q[i]!=q[i+1]-1){
            no
            return;
        }
    }
    yes
    return;
  }


  else{
    if(v[0]!=1){
        v.insert(v.begin(), 1);
    }
    if(v[v.size()-1]!=x){
        v.pb(x);
    }

    for(int i=0; i<v.size()-1; i++){
        ll p = abs(v[i+1]-v[i]);
        if(p>n){
            // if(p%2==0){
            //     no
            //     return;
            // }
            // else{
            //     q.pb(p/2);
            //     q.pb(p/2+1);
            // }
            no
            return;
            
        }
        if(p==0){
            no
            return;
        }
        else if(p<=n){
            q.pb(p);
        }
        count = count + p;
    }
    sort(q.begin(), q.end());
    if(q.size()>n-1){
        no
        return;
    }
    if(count>=x || x-count!=1){
        no
        return;
    }
    for(int i=0; i<q.size()-1; i++){
        if(q[i]!=q[i+1]-1){
            no
            return;
        }
    }
        yes
        return;
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