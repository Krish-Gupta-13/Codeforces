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
vector<ll> v;
vector<ll> q;
vector<ll> ans;
int arr[100000];
int arr1[100000];
ll a,b,c;
cin>>a>>b>>c;
ll ca = c%a;
ll cb = c%b;
ll cab = c%(a+b);
if(a%5==0 && b%5==0 && c%5!=0){
    cout<<"No"<<endl;
}
else if(c%a==0 || ca%a==0 || ca%cab==0 || ca%b==0 || c%b==0 || cb%b==0 || cb%cab==0 || cb%a==0 || c%(a+b)==0 || cab%(a+b)==0 || cab%a==0 || cab%b==0){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
// for(ll i=0; i<1e4; i++){
//     for(ll j=0; j<1e4; j++){
//         if(a*i + b*j == c){
//             cout<<"Yes"<<endl;
//             count = 1;
//             break;
//             // return;
//         }
//     }
//     if(count == 1) break;
// }
// if(count==0){
// cout<<"No"<<endl;
// }
return 0;
}