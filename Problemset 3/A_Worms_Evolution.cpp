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
vector<ll> r;
int k=0;
vector<ll> ans;
int arr[100000];
int arr1[100000];
ll n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        for(int k=0; k<n; k++){
            if(arr[i]==arr[j]+arr[k] && i!=j && j!=k){
                cout<<++i<<" "<<++j<<" "<<++k<<endl;
                count1 = 1;
                break;
            }
        }
        if(count1==1) break; 
    }
    if(count1==1) break;
}
if(count1==0)
nm
return 0;
}