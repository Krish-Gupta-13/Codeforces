// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;
// #define ll long long int
// #define llf long long float
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define nm cout<<"-1"<<endl;
// #define pb push_back
// #define pf push_front
// #define ppb pop_back
// #define ppf pop_front
// #define st sort(v.begin(), v.end());
// #define stg sort(v.begin(), v.end(), greater<>());
// #define pi  3.14 
// //Jda mt soch code krte ja//
// int main(){
// ll count = 1;
// ll count1 = 1;
// vector<ll> v;
// vector<ll> q;
// int arr[100000];
// ll n,t;
// cin>>n>>t;
// // if(n==1){
// //     cout<<t<<endl;
// // }
// for(int i=1; i<n; i++){
//     count1=10*count1;
// }
// if(t<=count1){
//     if(count1%t==0){
//         cout<<count1<<endl;
//     }
//     else{
//         cout<<t*((count1/t)+1)<<endl;
//     }
// }
// else if(n==1 && t<10){
//     cout<<t<<endl;
// }
// else{
//     nm
// }
// return 0;
// }

#include <iostream>
using namespace std;
int main() {
   int n,t,x=1;
   cin>>n>>t;
   if(n==1 && t==10){
       cout<<-1<< endl;
   }
   else{
       cout<<t;
       if(t==10){
            x++;
       }
       for(x;x<n;x++){
           cout<<0;
       }
   }
 
 
   return 0;
}