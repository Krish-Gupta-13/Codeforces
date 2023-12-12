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
#define stt sort(b.begin(), b.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
//Jda mt soch code krte ja//
int main(){
ll count = 0;
int n,x;
int z = 0;
cin>>n>>x;
vector<int> v;
vector<int> b;
int arr[100000];
for(int i=0; i<n*2; i++){
    cin>>arr[i];
}
for(int i=0; i<n*2; i=i+2){
    if(arr[i]>arr[i+1]){
        swap(arr[i], arr[i+1]);
    }
}

for(int i=0; i<n*2; i=i+2){
    int d = arr[i];
    v.pb(d);
}
for(int i=1; i<n*2; i=i+2){
    int e = arr[i];
    b.pb(e);
}

st
stt
for(int i=0; i<n; i++){
    if(v[i]<x && b[i]>x){
int q = v[n-1]-x;
int p = b[0]-x;
 z = min(q,p);
   }
   else if(v[i]>x && b[i]<x){
    z = -1;

   }
}
cout<<z<<endl;


return 0;
}