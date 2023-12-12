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
//Jda mt soch code krte ja//
int main(){
int t;
cin>>t;
while(t--){
    int n,H,M;
    cin>>n>>H>>M;
    int count = 0;
    int count2 = 0;
    int h[100000],m[100000];
    for(int i=0; i<n; i++){
        cin>>h[i]>>m[i];
    }
int p = (60*(h[n-1]-H)+(m[n-1]-M));
int q = (24*60+(60*(h[n-1]-H)+(m[n-1]-M)));

    for(int i=0; i<n; i++){
    if(h[i]==H && m[i]==M){
    count = 0;
    count2 = 0;
       }
 else if((60*(h[n-1]-H)+(m[n-1]-M))>=0){
    // cout<<p/60<<" "<<p%60<<endl; 
    count = p/60;
    count2 = p%60;
  }
  else{
     count = q/60;
    count2 = q%60;
    // cout<<q/60<<" "<<q%60<<endl;
  }
    }
// cout<<count<<" "<<count2<<endl;
    cout<<count<<" "<<count2<<endl;
    
}
return 0;
}