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

int isprime(int x){
    if(x==1){
        return false;
    }
    if(x==2){
        return true;
    }
    bool ans = true;
    for(int i=2; i<x; i++){
        if(x%i==0){
            ans = false;
        }
    }
    return ans;
}

int main(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
ll n,k;
cin>>n>>k;
for(int i=2; i<=n; i++){
    if(isprime(i)){
        v.pb(i);
    }
}
for(int i=0; i<v.size(); i++){
    int x = v[i];
    for(int j=0; j<i-1; j++){
        if(v[j]+v[j+1]+1==x){
            count++;
            break;
        }
    }
}
if(count>=k)
yes
else
no
// for(auto i:v){
//     cout<<i<<" ";
// }
// cout<<endl;

return 0;
}