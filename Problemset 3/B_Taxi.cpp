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
ll count = 0;
ll c1 = 0,c2 = 0,c3 = 0,c4 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
int n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
for(int i=0; i<n; i++){
    if(arr[i]==1){
        c1++;
    }
    else if(arr[i]==2){
        c2++;
    }
     else if(arr[i]==2){
        c3++;
    }
     else{
        c4++;
    }
}
if(c4>0){
    count++;
    c4--;
cout<<count<<endl;
}
else if(c3>0 && c1>0){
    count++;
    c3--;
    c1--;
}
else if(c2>0){
    if(c2%2==0){
        count = count + c2/2;
        c2=0;
    }
    else{
        count = count + c2/2;
        c2 = 1;
    }
}
else if(c1>1){
    if(c1%2==0 && c2!=1){
        count++;
        c2=0;
        c1 = c1-2;
    }
}
else if(c1>3){
    if(c1%4==0){
        count = count + c1/4;
        c1 = c1-4;
    }
    else{
        count = count + c1/4 + 1;
    }
}
else if(c3>0){
    count++;
    c3--;
}
cout<<count<<endl;
return 0;
}