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
ll t;
cin>>t;
while(t--){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
string s;
char str;
cin>>s;
cin>>str;
for(int i=1; i<=s.length(); i++){
    if(s[i]==str){
        count++;
    }
}
for(int i=0; i<s.length(); i++){
    if(s[i]==str){
        v.push_back(i+1);
    }
}
for(int i=0; i<v.size(); i++){
    if(v[i]%2!=0){
        count = 1;
        break;
    }
    else{
        count = 0;
    }
}
if(count == 0){
    no
}
else{
    yes
}
// for(auto i:v){
//     cout<<i<<" ";
// }
// cout<<endl;

}
return 0;
}