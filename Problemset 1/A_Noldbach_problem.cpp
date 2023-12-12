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
// ll t;
// cin>>t;
// while(t--){
vector<ll> v;
vector<ll> q;
int arr[100000];
int n,k;
cin>>n>>k;
ll count = n;
ll count1 = 0;
for(int i=1; i<=n; i++){
    ll ele;
    ele = i; 
    v.pb(ele);
}
// for(auto i:v){
//     cout<<i<<" ";
// }
// cout<<endl;
for(int i=1; i<=n; i++){
    for(int j=1; j<=n/2; j++){
        if(i%j==0){
            count--;
            break;
            // q.push_back(1);
        }
    }
    
}
cout<<count<<endl;
cout<<q.size()<<endl;

// }
return 0;
}