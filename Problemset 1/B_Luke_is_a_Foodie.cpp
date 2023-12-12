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


int x;
ll n;
cin>>n>>x;
ll count = 0;
// int a[100000];
vector<int> a;
for(int i=0; i<n; i++){
    ll element;
    cin>>element;
    a.push_back(element);
 }
int l = a[0] - x;
int r = a[0] + x;
    for(int i=0; i<n; i++){
        l = max(l, a[i]-x);
        r = min(r, a[i]+x);
        // cout<<l<<" "<<r<<endl;
        if(l>r){
            count++;
            l = a[i] - x;
            r = a[i] + x;
        }
        else{
            count = count + 0;
        }
    }
    cout<<count<<endl;
}
return 0;
}