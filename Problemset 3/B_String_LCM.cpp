//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
#include <numeric>
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
string a,b;
cin>>a>>b;
ll c,d,e,max_num,flag=1;
c = a.length();
d = b.length();
string str1 = "";
string str2 = "";
max_num = (c > d) ? c : d; 

while (flag)    {   
    if(max_num % c == 0 && max_num % d == 0){  
             e = max_num;
             break;
        }  
        ++max_num; 
    }  
ll f = e/c;
ll g = e/d;
for(int i=1; i<=f; i++){
    str1 = str1 + a; 
}
for(int i=1; i<=g; i++){
    str2 = str2+b; 
}

if(str1==str2){
    cout<<str2<<endl;
}
else{
    nm
}
}
return 0;
}

    
 
     
  