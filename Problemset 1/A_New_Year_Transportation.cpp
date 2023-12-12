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
int count = -1;
vector<ll> v;
vector<ll> b;
int arr[100000];
ll n, t;
cin>>n>>t;
for(int i=1; i<n; i++){
    // ll ele;
    // cin>>ele;
    // b.pb(ele);
    cin>>arr[i];
}
for(int i=1; i<=n; i=i+arr[i]){
    if(i == t){
        // v.pb(i);
        yes
        return 0;
    }
    if(i>t){
        break;
    }
    
}
no
// if(v.size()!=0){
//     yes
// }
// else{
//     no
// }

return 0;
}