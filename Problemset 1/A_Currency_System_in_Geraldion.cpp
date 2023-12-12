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
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
ll n;
cin>>n;
for(int i=0; i<n; i++){
    ll ele;
    cin>>ele;
    v.pb(ele);
}
for(int i=0; i<n; i++){
    if(v[i]==1){
        count = 1;
        break;
    }
    else{
        count = -1;
    }
}
if(count == 1){
    cout<<-1<<endl;
}
else{
    cout<<1<<endl;
}
return 0;
}