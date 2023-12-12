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
#define pi  3.14 
#define srt sort(v.begin(), v.end());
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int count = 0;
    vector<int> v;
    for(int i=0; i<n; i++){
    ll element;
    cin>>element;
    v.pb(element);
  }
srt
for(int i=1; i<n; i++){
    count = count + (v[i] - v[0]); 
}
cout<<count<<endl;
}

return 0;
}