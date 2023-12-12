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
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
int main(){
ll t;
cin>>t;
while(t--){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
vector<ll> ans;
int arr[100000];
int arr1[100000];
ll n;
cin>>n;
string s;
cin>>s;
for(int i=0; i<n/2; i++){
    if((s[i]=='a' && s[n-i-1]=='z') || (s[i]=='z' && s[n-i-1]=='a')){
        count=1;
        break;
    }
    else if(s[i]-s[n-i-1]==0 || s[i]-s[n-i-1]==2 || s[i]-s[n-i-1]==-2){
        count=0;
    }
    else{
        count=1;
        break;
    }
}
if(count==1)
no
else
yes
}
return 0;
}