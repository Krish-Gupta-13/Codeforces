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
void countfreq(int *arr, int n){
    vector<int> v;
    int d,e;
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto x:mp){
        d = x.first;
        e = x.second;
        v.pb(e);
    }
    stg
    cout<<v[0]<<" ";
}
int main(){
// ll t;
// cin>>t;
// while(t--){
ll count = 0;
int n;
cin>>n;
int arr[100000];
// vector<int> v;




for(int i=0; i<n; i++){
    cin>>arr[i];
    }
sort(arr, arr+n);
for(int i=0; i<n; i++){
        if(arr[i]!=arr[i+1]){
        count++;
    }

}
countfreq(arr, n);
cout<<count<<endl;

// }
return 0;
}