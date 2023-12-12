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
ll count = 1;
ll count1 = 1;
vector<ll> v;
unordered_map<int, int> m;
int arr[100000];
int arr1[100000];
int n = 6;
  for(int i=0; i<3; i++){
    cin>>arr[i];
    cin>>arr1[i];
  }
  sort(arr, arr+3);
  sort(arr1, arr1+3);
  for(int i=0; i<2; i++){
    if(arr[i]==arr[i+1]){
        count++;
    }
    if(arr1[i]==arr1[i+1]){
        count1++;
    }
  }
  if(count>1 && count1>1)
  no
  else
  yes
  

}
int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}