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
    int n;
    cin>>n;
    int a[100000];
    int b[100000];
    int count = 0;
    int c,d;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
     for(int i=0; i<n; i++){
        // int c; 
        if(b[i]!=0){
            c = i;
            // break;
        }
        // else{
            // c = 0;
        // }

        
    }
    for(int i=0; i<n; i++){
        d = a[c] - b[c];
    }
    // cout<<d<<endl;

    

    for(int i=0; i<n; i++){
        if(a[i]-b[i]<=d && a[i]>=b[i] && d>=0){
            count = 1; 
        }
        else if(b[i]>a[i]){
            count = -1;
        }
        else{
            count = -1;
        }
    }

     if(n==1 && a[0]>b[0]){
            count = 1;
        }
// for(int i=0; i<n; i++){
//         if(b[i]>a[i]){
//             count = -1;
//         }
       
//     }
    if(count == 1){
        yes
    }
    else{
        no
    }

}
return 0;
}