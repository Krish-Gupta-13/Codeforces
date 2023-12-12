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
// ll t;
// cin>>t;
// while(t--){
ll count = 0;
vector<int> v;
int n;
cin>>n;
int a;
for(int i=0; i<n; i++){
    int wlw;
    cin>>wlw;
    v.pb(wlw);
}
for(int i=0; i<n; i++){
    int b;
    b = abs(v[i]-v[i+1]);
    v.pb(b);

}
int z = (v[n-1]-v[0]);
v.pb(z);
st
for(int i=0; i<n; i++){
    
}
// }
return 0;
}