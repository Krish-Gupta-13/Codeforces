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
ll t;
cin>>t;
while(t--){
ll count = 0;
int n;
cin>>n;
string s;
cin>>s;
sort(s.begin(), s.end());
// cout<<s<<endl;
// for(int i=0; i<n; i++){
//     if(s[i]=='T' && s[i+1]=='i' && s[i+2]=='m' && s[i+3]=='r' && s[i+4]=='u'){

//         count = 1; 
//     }
//     else{
//         // n
//         count = 0;
//     }
    if(s[0]=='T' && s[1]=='i' && s[2]=='m' && s[3]=='r' && s[4]=='u' && n<=5){
        yes
    }
    else{
        no
    }

// }
// if(count == 1){
//     yes
// }
// else{
//     no
// }
}
return 0;
}