//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llf long long float
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nm cout<<"-1"<<endl;
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
//Jda mt soch code krte ja//
int main(){
ll n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 ll e = (k*l)/nl;
 ll f = c*d;;
 ll g = p/np;
 int x = min({e,f,g})/n;
cout<<x<<endl;

return 0;
}