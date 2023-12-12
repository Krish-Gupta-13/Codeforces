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
ll count = 0;
ll n,m;
cin>>n>>m;
vector<int> v;
int arr[100000];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
sort(arr, arr+n);
for(int i=0; i<m; i++){
    if(arr[i]<1){
        count = count + arr[i];
    }
}
cout<<count*(-1)<<endl;


return 0;
}