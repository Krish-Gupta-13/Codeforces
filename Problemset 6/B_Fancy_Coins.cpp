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
// ll ans = 0;
vector<ll> v;
  ll n,m,a,b;
  cin>>m>>n>>a>>b;
  if(m%n==0){
    if(m/n<=b){
        cout<<0<<endl;
    }
    else{
        cout<<m/n-b<<endl;
    }
    return;
  }
  if(m-(b*n)>0){
     m=m-b*n;
  }
  else{
    while(m>0 && b--){
      m = m-n;
    }
    // while(m>0 && a--){
    //   m = m-1;
    // }
    // cout<<m<<endl;
  }
  ll rem = m%n;
  ll ans = m/n;
  if(a>rem){
    a = a-rem;
  }
  else{
    rem = rem-a;
  }
  ll z = ans%n;
  ans = ans/n;
  ans = ans-a/n;
  if(ans<n){
    cout<<ans<<endl;
  }
  else
  cout<<ans/n+ans%n-z<<endl;


  





  // ll x = m/n;
  // ll y = a/n;
  // ll z = (x-b)*n + m%n;
  // if(x-y<=0){
  //   cout<<0<<endl;
  //   return;
  // }

  //   if(a>=z%n){
  //       a = a-z%n;
  //       z = z - z%n;
  //   }
  //   ll l = z%n;
  //   z = z/n - a/n;
  //   a = a%n;
  //   z = z*n + l;
  //   // if(z<n){
  //   //     cout<<z<<endl;
  //   // }
  //   // else{

  //       // if(a>z%n){
  //       //   cout<<z/n<<endl;
  //       // }
  //       // else{
  //         if(z%n==0)
  //         cout<<z/n<<endl;
  //         else
  //         cout<<z/n+z%n<<endl;
  //       // }
        
  //   // }
  // // }


}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}

//   if(a>m%n){
//     a = a - m%n;
//     a = a/n;
//   }
//   else{
//     ans = ans+m%n;
//   }
// ll rans = x-b-a+ans;
// if(rans<0)
//     cout<<0<<endl;
// else
//   cout<<rans<<endl;