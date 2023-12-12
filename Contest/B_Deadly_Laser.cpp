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
    int n,m,s1,s2,d;
    cin>>n>>m>>s1>>s2>>d;
    if(s1-d<=1 && s2-d<=1){
        cout<<-1<<endl;
    }
    else if(s1+d>=n && s2+d>=m){
        nm
    }
    else{
        cout<<n-1+m-1<<endl;
    }

}
return 0;
}