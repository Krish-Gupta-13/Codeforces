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
ios_base::sync_with_stdio(false);
ll t;
cin>>t;
while(t--){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
ll r,g,b,w;
cin>>r>>g>>b>>w;
if(r==0 && g==0 && b==0 && w==0){
    yes
    // continue;
    break;
}
if(r%2+g%2+b%2+w%2<=1){
    yes
    // continue;
}
else{
    if(r!=0 && g!=0 && b!=0){
    r=r-1;
    g=g-1;
    b=b-1;
    w=w+3;
    if(r%2+g%2+b%2+w%2<=1){
        yes
    }
    else{
        no
    }
   }
   else{
    no
   }
}




if(r==0 && g==0 && b==0 && w==0){
    yes
    // break;
}
 if(r%2+g%2+b%2+w%2>1){
  
}
// else if(r>0 && g>0 && b>0 && ((r-1)%2+(g-1)%2+(b-1)%2+(w+3)%2)>1){
//     yes
// }
else if((r-1)%2+(g-1)%2+(b-1)%2+(w+3)%2>1){
    no
}
else{
    yes
}
// while(r!=0 || g!=0 || b!=0){
//     r=r-1;
//     g=g-1;
//     b=b-1;
//     w=w+3;
// }
// if(r%2!=0){
//     count++;
// }
// else if(g%2!=0){
//     count++;
// }
// else if(b%2!=0){
//     count++;
// }
// else if(w%2!=0){
//     count++;
// }
// // else{
// //     count = count+0;
// // }

// if(count>1){
//     yes
// }
// else{
//     no
// }
}
return 0;
}