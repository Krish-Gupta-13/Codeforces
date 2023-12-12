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
int t;
cin>>t;
while(t--){
    int m,n;
    cin>>n>>m;
    if(m>n){
    cout<<(n-1)+(m-1)+(n-1)+1<<endl;
    }
    else if(n==1 && m==1){
        cout<<0<<endl;
    }
    else{
        cout<<(m-1)+(m-1)+(n-1)+1<<endl;
    }
}
return 0;
}