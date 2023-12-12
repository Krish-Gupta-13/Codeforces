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
#define pf push_top
#define ppb pop_back
#define ppf pop_top
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
int n;
cin>>n;
priority_queue<int> pq;
for(int i=1; i<n+1; i++){
    pq.push(i);
}
cout<<2<<endl;

int l = pq.size();
while(l!=1){
    int a = pq.top();
    v.push_back(a);
    pq.pop();
    int b = pq.top();
    v.push_back(b);
    pq.pop();
    int c = a+b;
    if(c%2==0){
        pq.push(c/2);
    }
    else{
        pq.push(c/2+1);
    }
    l--;
}
for(auto i:v){
    cout<<i<<" ";
    count++;
    if(count%2==0){
        cout<<endl;
    }
}
}
return 0;
}