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
ll count = 1e9;
ll count1 = 0;
string str;
cin>>str;
if(str.size()==1){
    count1 = 0;
    cout<<count1;
}
else{
while(count>=10){
    ll sum1 = 0;
    for(int i=0; i<str.size(); i++){
        // ll num = str[i] - '0'; 
        // sum1 = sum1 + num;
        sum1 = sum1 + str[i] -'0';
}
count = sum1;
stringstream ss;
string s;
ss<<sum1;
ss>>s;
str = s;
count1++;
    }
    cout<<count1<<endl;
}
return 0;
}