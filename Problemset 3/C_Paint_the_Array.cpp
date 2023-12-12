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
for(int i=0; i<n; i++){
    ll ele;
    cin>>ele;
    v.pb(ele);
}
// if(n==2){
//     if(v[0]<v[1] && v[1]%v[0]!=0 && v[0]!=1){
//     cout<<v[1]<<endl;
//     }
//     else if(v[0]>v[1] && v[0]%v[1]!=0 && v[1]!=1){
//     cout<<v[1]<<endl; 
//     }
//     else{
//     cout<<0<<endl;
//     }
// }
// if(n>2){
for(int i=0; i<n; i=i+2){
    if(v[i]%2==0 && v[i+1]!=0){
        // cout<<2<<endl;
        count = 2;
    }
}
if(count==2){
    cout<<2<<endl;
}
for(int i=0; i<n; i=i+2){
    if(v[i]%2!=0 && v[i+1]==0){
        cout<<2<<endl;
    }
}
for(int i=0; i<n; i++){
    for(int j=0; j<n-2; j++){
        if(v[j]%v[i]==0 && v[j+2]%v[i]==0 && v[j+1]%v[i]!=0){
            ans.pb(v[i]);
            count++;
        }
        else{
            count = -1;
            break;
        }
    }
    if(count == 0){
        ans.pb(v[i]);
        break;
    }
}
// }

if(n%2!=0){
    if(count==n/2 || count==n/2+1){
        cout<<ans[0]<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
else{
    if(count==n/2){
        cout<<ans[0]<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
// if(ans.size()==0){
//     cout<<0<<endl;
// }
// else{
//     cout<<ans[0]<<endl;
// }
}
return 0;
}