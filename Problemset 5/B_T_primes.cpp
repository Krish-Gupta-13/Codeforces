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
ll n;
cin>>n;
ll arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
for(int j=0; j<n; j++){
        if(arr[j]<4){
            no
            continue;
        }
    for(int i=2; i<arr[j]; i++){
        if(arr[j]%i==0){
            count++;
            if(count>=2){
                no
                count = 0;
                break;
            }
        }
        else if(count==0 && i==arr[j]- 1){
            no
        }
        else if(i==arr[j]-1 && count==1){
            yes
            count = 0;
        }
    }
}
  
}


int main(){
  solve();
return 0;
}