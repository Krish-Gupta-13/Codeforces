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
int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    ll a,b,c;
    cin>>a>>b>>c;
    ll count = 0;
    //  cout<<a<<b<<c<<endl;   
    // if()
    vector<int> v;
    v.pb(a);
    v.push_back(b);
    v.push_back(c);
    // for(auto i:v){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    for(int i=0; i<3; i++){
        if(v[x-1]==0){
            count = 0;
        }
        else{
            if(v[v[x-1]-1]==0){
                count = 0;
            }
            else{
                count = 1;
            }
        }
    }
    // cout<<count<<endl;
    if(count == 0){
        no
    }
    else{
        yes
    }

}
return 0;
}