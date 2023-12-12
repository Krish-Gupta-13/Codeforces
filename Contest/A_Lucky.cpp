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
#define pi  3.14 
int main(){
    int t;
    cin>>t;
while(t--){
    string s;
    cin>>s;
    int a = s[0]+s[1]+s[2];
    int b = s[3]+s[4]+s[5];
    // ll a = s.at(0) + s.at(1) + s.at(2);
    // ll b = s.at(3) + s.at(4) + s.at(5); 
    // cout<<a<<endl;
    if(a==b){
        yes
    }
    else{
        no
    }
}
return 0;
}