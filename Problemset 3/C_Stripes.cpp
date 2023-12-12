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
ll t;
cin>>t;
while(t--){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
char ch[8][8];
int arr[100000];
for(int i=0; i<8; i++){
    for(int j=0; j<8; j++){
        cin>>ch[i][j];
    }
}
for(int i=0; i<8; i++){
    for(int j=0; j<8; j++){
        if(ch[i][j]=='R'){
            count++;
        }
    }
    if(count == 8){
        count1 = 1;
        continue;
    }
    else{
        // count1 = 0;
        count = 0;
    }
}
if(count1 == 1){
    cout<<"R"<<endl;
}
else{
    cout<<"B"<<endl;
}
}
return 0;
}