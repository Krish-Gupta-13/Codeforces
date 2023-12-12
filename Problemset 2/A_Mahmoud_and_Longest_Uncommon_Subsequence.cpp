//Code bhi krle kitna game khelega//
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
int main(){

ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
string a,b;
cin>>a>>b;
int x = a.length();
int y = b.length();
int z = max(x,y);
int o = min(x,y);
for(int i=0; i<o; i++){
    if(a[i]==b[i]){
        count++;
    }
    // else{
    //     count++;
    // }
}
if(count==z){
    cout<<"-1"<<endl;
}
else{
    cout<<z<<endl;
}
return 0;
}