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
#define srt sort(v.begin(), v.end());
#define pi  3.14 
int main(){
int t;
cin>>t;
while(t--){
    int n; 
    cin>>n;
    int a,b,c;
    if(n%3==0){
        a = n/3+1;
        b = a-1;
        c = n-a-b;
    }
    // else if(n%3==2){
    //     a = n/3+2;
    //     b = a-1;
    //     c = n-a-b;
    // }
    else{
        a = n/3+2;
        b = a-1;
        c = n-a-b;
    }
    if(c == 0){
        c = c+1;
        b = b-1;
    }
    cout<<b<<" "<<a<<" "<<c<<endl;
}
return 0;
}