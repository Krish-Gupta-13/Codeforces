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
//Jda mt soch code krte ja//
int main(){
ll t;
cin>>t;
while(t--){
ll count = 1;
ll count1;
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
sort(arr,arr+n);
for(int i=0; i<n; i++){
    if(arr[i]==arr[i+1]){
        count++;
    }
    else{
        count1=count;
        v.pb(count1);
        count=1;
    }
}
stg
// for(auto i:v){
//     cout<<i<<" ";
// }
// cout<<endl;
ll anss = v[0];
ll len = v.size();
ll mini = min(anss,len);
if(len==1 || (n==4 && v[0]==v[1])){
    cout<<0<<endl;
}
else if(n%2!=0 && v[0]==anss/2+1){
    cout<<v[0]/2-1<<endl;
}

else{
    cout<<mini<<endl;
}
// else{
//     cout<<mini<<endl;
// }
}
return 0;
}