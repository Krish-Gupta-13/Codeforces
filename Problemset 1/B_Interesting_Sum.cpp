//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
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
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        ll element;
        cin>>element;
        v.pb(element);
    }
    st
    cout<<(v[n-1]-v[0])+(v[n-2]-v[1])<<endl;

}
return 0;
}