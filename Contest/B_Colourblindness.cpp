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
int count = 0;
int count1 = 0;
int count2 = 0;
int n;
cin>>n;
string s,a;
cin>>s>>a;
// sort(s.begin(), s.end());
// sort(a.begin(), a.end());
// for(int i=0; i<n; i++){
//     if(s[i]=='G'){
//         s[i]='B';
//     }
//      if(a[i]=='G'){
//         a[i]='B';
//     }
// }

// for(int i=0; i<n; i++){
//     if(s[i]==a[i]){
//         count = 1;
//     }
//     else{
//         count = 0;
//     }
// }
// if(count == 1){
//     yes
// }
// else{
//     no
// }

for(int i=0; i<n; i++){
    if(s[i]=='R'){
        count1++;
    }
    if(a[i]=='R'){
        count2++;
    }
}
if(count1 == count2){
    yes
}
else{
    no
}
}

return 0;
}