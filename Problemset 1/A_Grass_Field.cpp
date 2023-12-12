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
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
//Jda mt soch code krte ja//
int main(){
int t;
cin>>t;
while(t--){
    int a[100000];
    int b[100000];
    int count = -1;
    for(int i=0; i<2; i++){
        cin>>a[i];
        cin>>b[i];
    }

    for(int i=0; i<2; i++){
        if(a[0]==0 && b[0]==0 && a[1]==0 && b[1]==0){
            count = 0;
        }
        else if(a[0]==1 && b[0]==1 && a[1]==1 && b[1]==1){
            count = 2;
        }

        else{
            count = 1;
        }
    }

    if(count == 0){
             cout<<0<<endl;

    }
    else if(count == 1){
        cout<<1<<endl;

    }
    else{
            cout<<2<<endl;
    }

}
return 0;
}