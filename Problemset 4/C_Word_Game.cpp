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
int n;
cin>>n;
string arr[3][n];
unordered_map<string, int> mp;
for(int i=0; i<3; i++){
    for(int j=0; j<n; j++){
        cin>>arr[i][j];
        mp[arr[i][j]]++;
    }
}
for(int i=0; i<3; i++){
    int cnt = 0;
    for(int j=0; j<n; j++){
        if(mp[arr[i][j]]==1)
            cnt = cnt+3;
        else if(mp[arr[i][j]]==2)
            cnt = cnt+1;
    }
    cout<<cnt<<" ";
}
cout<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}