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
    int n,m;
    cin>>n>>m;
    string a;
    string b;
    cin>>a>>b;
    int x = a.length();
    int y = b.length();
    int count = 1;
    int count1 = 1;
    for(int i=x-y; i<x; i++){
        for(int j=0; j<y; j++){
            if(a[i]!=b[j]){
                count = 0;
            }
            else{
              
                count = 1;

            }
        }
    }
    // string c;
    // c = reverse(b.begin(), b.end());
    // for(int i=a.length(); i>x-y; i--){
    //     for(int j=y; j>0; j--){
    //         if(a[i]!=b[j]){
    //             count = 0;
    //         }
    //         else{
              
    //             count = 1;

    //         }
    //     }
    // }

    for(int i=0; i<x-y; i++){
        if(a[i]==a[i+1]){
            count1 = 1;
        }
        else{
            count1 = 0;
        }
    }

    // if(count1!=0 && count == 0){ 
    //     yes
    // }
    // else{
    //     no
    // }


 if(count == 1){ 
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    //  if(count1 == 0){ 
    //     yes
    // }
    // else{
    //     no
    // }


 
}
return 0;
}