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
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    int x;
    string s;
    for(int i=0; i<n; i++){
        cin>>x>>s;
    }
    for(int i=0; i<x; i++){
        if(s[i]=='D'){
        arr[i]++;
        }
        else if(s[i]=='U'){
        arr[i]--;
        }
        if(arr[i]<0){
            arr[i]=arr[i]+10;
            
        }
         if(arr[i]>0){
            arr[i]=arr[i]-10;
            
        }
    }
    }
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }

    cout<<endl;

    // for(int i=0; i<n; i++){
    //     // cin>>x>>s;
    // }


}
return 0;
}