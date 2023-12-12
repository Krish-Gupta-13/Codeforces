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
//Jda mt soch code krte ja//
int main(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
int arr[8];
ll n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
ll i = 0;
ll ans = 0;
for(int i=0; ans<n; i++){
    if(ans>n){
        break;
    }
        
    ans = ans + arr[i%7];
}
if(i%7==0){
            cout<<7<<endl;
        }
        else{
            cout<<i%7<<endl;
        }

return 0;
}