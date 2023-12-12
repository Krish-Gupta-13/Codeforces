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
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
vector<ll> ans;
int arr[100000];
int arr1[100000];
ll n,m,a,b;
cin>>n>>m>>a>>b;
if(b<=a*m){
    // if(n%b==0 && n%m==0){
    //     cout<<n/(b*m)<<endl;
    // }
    // else if(n%b==0 && n%m!=0){
    //     cout<<n/(b*m)+1<<endl;
    // }
    // else{
        if(n%b==0){
        cout<<(n/m)*b+(n%m)*b<<endl;
        }
        else{
            cout<<(n/m)*b+(n%m)*a<<endl;
        }
    // }
}
else{
    cout<<a*n<<endl;
}
return 0;
}