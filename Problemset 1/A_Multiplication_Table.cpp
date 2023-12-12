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
vector<int> b;
int arr[100000];
ll n,x;
cin>>n>>x;
int z = max(n,x);
for(ll i=1; i<=n; i++){
    if(x%i==0){
        v.pb(i);
    }
}
// for(auto i:v){
//     cout<<i<<" ";
// }
cout<<endl;
for(ll i=0; i<v.size(); i++){

    if((v[i]*n)>=x){
        count++;
    }
    else{
        count = count + 0;
    }
}
cout<<count<<endl;
return 0;
}