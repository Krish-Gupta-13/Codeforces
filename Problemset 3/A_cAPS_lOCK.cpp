//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define llf long long float
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nm cout<<"-1"<<endl;
#define F first 
#define S second
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
int main(){
ll count = 0;
ll count1 = 0;
ll count2 = 0;
vector<ll> v;
vector<ll> q;
vector<ll> ans;
int arr[100000];
int arr1[100000];
string s;
cin>>s;
string str = "";
for(int i=0; i<s.length(); i++){
    if(s[i]>64 && s[i]<91){
        count++;
    }
}
for(int i=1; i<s.length(); i++){
    if(s[i]>64 && s[i]<91){
        count1++;
    }
}
if((s[0]>96 && s[0]<123) && count1==s.length()-1){
        str+= s[0]-32;
    for(int i=1; i<s.length(); i++){
        str+= s[i]+32;
  }
}
else if(count==s.length()){
for(int i=0; i<s.length(); i++){
        str+=s[i]+32;
}
}
else{
    for(int i=0; i<s.length(); i++){
    str+=s[i];
    }
}
cout<<str<<endl;
return 0;
}