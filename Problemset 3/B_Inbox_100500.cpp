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
ll n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
for(int i=0; i<n; i++){
    if(arr[i]==1){
        q.pb(i);
    }
}
for(int i=q[0]; i<q[q.size()-1]; i++){
    if(arr[i]==0 && arr[i+1]==0){
        count++;
    }
} 

// for(int i=0; i<n; i++){
//     if(arr[i]==0){
//         count1++;
//     }
// }
// if(count1==n){
//     cout<<"0"<<endl;
// }
if(q.empty()){
    cout<<-1<<endl;
}
// if(q.size()!=0){
else{
    cout<<n-count-q[0]+1-(n-q[q.size()-1])<<endl;
}
// else{
//     cout<<count1<<endl;
// }

return 0;
}