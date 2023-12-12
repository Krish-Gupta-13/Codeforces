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
int n;
cin>>n;
while(n--){
    string s;
    cin>>s;
    if(s.length()<=10){
        cout<<s<<endl;
    }
    else{
        cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
    }
}
return 0;
}