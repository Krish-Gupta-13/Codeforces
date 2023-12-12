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
    string a;
    string b;
    cin>>a>>b;
    string c = a + b;
    int count = 0; 
    sort(c.begin(), c.end());
    // cout<<c<<endl;
    for(int i=0; i<c.length(); i++){
        if(c[i]!=c[i+1]){
            count++;
        }
    }
    cout<<count-1<<endl;
}
return 0;
}