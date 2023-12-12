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
ll count = 0;
ll count1 = 0;
char ch = '0';
vector<ll> v;
vector<ll> q;
int arr[100000];
ll a,b,c;
cin>>a>>b;
c = a + b;
string ss  = "101";
// cout<<a<<" "<<b<<" "<<c<<endl;
string s1 = to_string(a);
string s2 = to_string(b);
string s3 = to_string(c);


    s1.erase(remove(s1.begin(), s1.end(), '0'), s1.end());
    s2.erase(remove(s2.begin(), s2.end(), '0'), s2.end());
    s3.erase(remove(s3.begin(), s3.end(), '0'), s3.end());


// cout<<s1<<endl;
// cout<<s1<<" "<<s2<<" "<<s3<<endl;
ll d = stoi(s1);
ll e = stoi(s2);
ll f = stoi(s3);
if(d+e==f){
    yes
}
else{
    no
}

return 0;
}