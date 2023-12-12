//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
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

ll count = 0;
vector<int> v;
vector<int> z;
int arr[100000];
int a,b,c;
cin>>a>>b>>c;
int e = (a+b)*c;
int f = a*(b+c);
// int g = (a+c)*b;
int k = a*b*c;
int m = a+b+c;
// int h = 
int q = max({e,f,k,m});
// int q = max(e,f);
// int p = max(q,g);
// cout<<p<<endl;
cout<<q<<endl;

return 0;
}