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
    int n,k;
    cin>>n>>k;
    int count = 0; 
    if(k%4==0){
        no
    }
    else if(k%4==1 || k%4==3){
        yes
        for(int i=1; i<=n; i=i+2){
            cout<<i<<" "<<i+1<<endl;
        }
            // count = 1;
    }
    else{
        yes
        for(int i=1; i<=n; i=i+2){
            if(i%4==1){
                // count = 0;
                cout<<i+1<<" "<<i<<endl;
            }
            else{
                cout<<i<<" "<<i+1<<endl;
                // count = 1;
            }
        }
    }
}
return 0;
}