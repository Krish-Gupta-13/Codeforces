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
ll count = 0;
string s;
cin>>s;
// cout<<s;
vector<int> v;
for(int i=0; i<s.length(); ){
    if(s[i]=='-'&& s[i+1]=='.'){
        v.pb(1);
        i = i+2;
    }
    else if(s[i]=='-' && s[i+1]=='-'){
        v.pb(2);
        i = i+2;

    }
    else{
        v.pb(0);
        i++;
    }
}
for(auto i:v){
    cout<<i;
}
cout<<endl;
return 0;
}