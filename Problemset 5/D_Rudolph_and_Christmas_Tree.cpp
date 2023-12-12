// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;
// #define ll long long int
// #define llf long long float
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define nm cout<<"-1"<<endl;
// #define F first 
// #define S second
// #define pb push_back
// #define ppb pop_back
// #define st sort(v.begin(), v.end());
// #define stg sort(v.begin(), v.end(), greater<>());
// #define fr(i,a,b) for(ll i=a;i<b;i++)
// #define frr(i,a,b) for(ll i=a;i>=b;i--)
// #define pi  3.14 
// #define mod 1e9+7
// // Jda mt soch code krte ja //

// // Maths //
// ll gcd(ll a, ll b){ if(b==0) return a; return gcd(b, a%b);} 
// ll lcm(ll a, ll b){ return (a/gcd(a,b)*b); }

// void solve(){
//   ll n, b, h;
//   cin>>n>>b>>h;
//   n*=1.0;
//   b*=1.0;
//   h*=1.0;
// vector<ll> v(n);
// for(int i=0; i<n; i++){
//     cin>>v[i];
// }
// st
// vector<double> q;
// long double ans = 0;
// for(int i=0; i<v.size()-1; i++){
//     if(v[i+1]-v[i]<h)
//         q.push_back(v[i+1]-v[i]);
//     else{
//         double area = b*h*1.0;
//         area = area/2.0;
//         ans = ans + area;
//     }
// }
// //   long double area = (1.0*(n*b*h))/2.0;
// //   long double sub = 0;


//   for(int i=0; i<q.size(); i++){
//     double y = (1.0*(q[i]*b)/(2.0*h));
//     double side = 1.0*(1.0*b-2.0*y);
//     double area = (double(side)*q[i])/2.0 + (double(b)*q[i])/2.0;
//     ans = ans + area;
//     // sub = sub + (1.0*(q[i]*b)/(2.0*h));
//   }

// double area = b*h*1.0;
// area = area/2.0;
// ans = ans+area;
//   cout<<setprecision(15)<<(ans)<<endl;


// }

// int main(){
//   ll testcases;
//   cin>>testcases;
//   while(testcases--){
//   solve();
//  }
// return 0;
// }


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
  ll n, b, h;
  cin>>n>>b>>h;
  n*=1.0;
  b*=1.0;
  h*=1.0;
vector<ll> v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
st
vector<double> q;
long double ans = 0;

for(int i=0; i<v.size()-1; i++){
    if(v[i+1]-v[i]<h)
        q.push_back(v[i+1]-v[i]);
}

  long double area = (1.0*(n*b*h))/2.0;
  long double sub = 0;

  for(int i=0; i<q.size(); i++){
    sub = 1.0*sub + (1.0*b-(2.0*(1.0*(q[i]*b)/(2.0*h))));
  }

  cout<<setprecision(15)<<1.0*area - 1.0*sub<<endl;


}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}