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
vector<ll> v;
int arr[100000];
  int n;
  cin>>n;
  ll one = 0;
  ll mone = 0;
  ll sum = 0;
  ll mul = 1;
  for(int i=0; i<n; i++){
    cin>>arr[i];
    if(arr[i]<0)
        mone++;
    else
        one++;
    sum = sum+arr[i];
    mul = mul*arr[i];
  }
  
if(sum<0){
    while(sum<0){
        sum = sum+2;
        count++;
    }
}
if((count%2==0 && mone%2==0 )|| (count&1 && mone&1)){
    cout<<count<<endl;
}
else{
    cout<<count+1<<endl;
}

}


int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}