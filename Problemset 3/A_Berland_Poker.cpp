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
ll n,m,k;
cin>>n>>m>>k;
ll r = n/k;

ll x = min(m,r);
ll y = (m-x+k-2)/(k-1);
cout<<x-y<<endl;
// if(m<=r){
//     cout<<m<<endl;
// }
// else{
//     if((r-1)==0){
//         cout<<r - 1<<endl;
//     }
//     else if((m-r)%2==0){
//         cout<<r - ((m-r)/(r-1))<<endl;
//     }
//     else{
//         cout<<r - ((m-r)/(r-1))-1<<endl;
//     }
// }

}
return 0;
}