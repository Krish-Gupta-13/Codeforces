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
    int n,x;
    cin>>n;
    cin>>x;
    vector<int> v;
    ll count = 1;
    for(int i=0; i<2*n; i++){
        int element;
        cin>>element;
        v.pb(element);
    }
    st
    for(int i=0; i<n; ++i){
    if((v[n+i]-v[i])<x){
           count = 0;
    }
    }
    if(count == 1){
        yes

    }
    else{
        no
    }
}
return 0;
}