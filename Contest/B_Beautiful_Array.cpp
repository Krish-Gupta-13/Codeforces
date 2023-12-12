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
#define srt sort(v.begin(), v.end());
#define pi  3.14 
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    ll count = 0;
    ll count1 = 0;
    ll arr[n]={0};
    if(s/k==b){
        arr[n-1]=s;
    for(ll i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
    else if(s>k*b && s/k>=b){
            for(ll i=1; i<=n; i++){
                if(s/k==b){
                    count = 1;
                }
                else{
                   s = s - (k-1);
                   arr[n-1-i]=k-1;
                //    arr[i]=k-1;
                }      
            }
            arr[n-1]=s;
            // sort(arr.begin(), arr.end());
        if(count == 1){
            for(ll i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
            cout<<endl;          
        }
        else{ 
            nm
        }
    }
  
    else{
        cout<<"-1"<<endl;
    }
}
return 0;
}