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
    int d,e,p;
    int count = 0;
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(auto i:mp){
        d = i.first;
        v.push_back(d);
    }

// for(auto b:v){
//     cout<<b<<" ";
// }
// cout<<endl;
p = arr[n-1];

e = v.size();
    //  for(int i=0; i<e-1; i++){
        // p = v[0];
    //  }

    for(int i=0; i<e-2; i++){
        if(p == v[i]){
            count = 1;
        }
        else{
            count = -1;
        }
    }  
    if(count == 1){
        cout<<e<<endl;
    }
    else{
        cout<<e-1<<endl;
    }

}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[100000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    countfreq(arr, n);
}
return 0;
}