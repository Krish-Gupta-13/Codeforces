#include<bits/stdc++.h>
#include<iomanip>
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
void cc(int arr[], int n, int k){
    vector<ll> q;
    vector<pair<int, int>> v;
    int count1 = 0;
    int count = 0;
    for(int i=0; i<n; i++){
        v.pb({arr[i], i});
    }
    sort(v.begin(), v.end());
    // for(int i=0; i<n; i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    for(int i=0; i<n;){
        count = count + v[i].first;
        if(k>=count){
            count1++;
            q.pb(v[i].second);
            i++;
        }
        else{
            // count = count;
            i++;
        }
    }
    if(k<v[0].first){
        cout<<0<<endl;
        // break;
    }
    else{
    cout<<count1<<endl;
    for(auto i:q){
        cout<<i+1<<" ";
    }
    // cout<<endl;
    }
}
int main(){
ll count = 0;
ll count1 = 0;
// vector<ll> v;
int arr[100000];
ll n,k;
cin>>n>>k;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
cc(arr, n, k);

return 0;
}