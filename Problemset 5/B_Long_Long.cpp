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
void solve(){
ll count = 0;
ll count1 = 0;
vector<ll> arr;
// int arr[100000];
  ll n;
  cin>>n;
  bool flag = false;
  for(int i=0; i<n; i++){
    ll ele;
    cin>>ele;
    arr.pb(ele);
    // cin>>arr[i];
    count1 = count1 + abs(arr[i]);
  }
  for(int i=0; i<n; i++){
    // if(arr[i]==0)
    // continue;
    if(arr[i]<0){
        flag = true;
    }
    else if(arr[i]>0){
        if(flag==true){
            count++;
            flag = false;
        }
        else
            continue;
    }
  }
  if(flag==true)
   count++;
    cout<<count1<<" "<<count<<endl;
}


int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}