//------------------Code bhi krle kitna game khelega---------------------------//
#include<bits/stdc++.h>
#include<iomanip>
#include<stdio.h>
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
//-----------------------Jada mt soch code krte ja------------------------------//
bool solve(string s){
for(int i=0; i<s.length(); i++){
    if(s[i]!='1' && s[i]!='4'){
       return false;
    }
    if(s[0]=='4'){
        return false;
    }
    if(s.find("444")!=s.npos){
        return false;
    }
    
}
return true;
}
int main(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
string s;
cin>>s;
if(solve(s)){
    yes
}
else{
    no
}

return 0;
}