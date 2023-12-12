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
// vector<ll> ans;
int arr[100000];
int arr1[100000];
int ans[100000];
ll d, sumtime;
cin>>d>>sumtime;
for(int i=0; i<2*d; i++){
    cin>>arr[i];
    cin>>arr1[i];
}

    ll mintime=0;
    ll maxtime=0;

for(int i=0; i<d; i++){
    mintime = mintime + arr[i];
}

for(int i=0; i<d; i++){
    maxtime = maxtime + arr1[i];
}

for(int i=0; i<d; i++){
    ans[i]=arr[i];
}

if(sumtime<mintime){
    cout<<"NO";
}
else if(sumtime>maxtime){
    cout<<"NO";
}
else{
    yes
    sumtime=sumtime-mintime;
    ll index;
        for(int i=0; i<d; i++){
            if(sumtime>=arr1[i]-arr[i]){
            sumtime=sumtime-arr1[i]+arr[i];
            // cout<<arr1[i]<<" ";
            ans[i]=ans[i]+arr1[i]-arr[i];
            // index = i;
            }
            else{
                ans[i]=ans[i]+sumtime;
                // cout<<sumtime+arr[i]<<" ";
                sumtime=0;
            }
        }
    for(int i=0; i<d; i++){
        cout<<ans[i]<<" ";
    }
    // cout<<endl;
}
return 0;
}