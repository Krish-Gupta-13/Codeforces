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
    int n;
    cin>>n;
    int k,p;
    k = n;
    int count = 0;  
    int cnt = 0;
    vector<int> v;
    if(n<10){
        cout<<n<<endl;
    }
    else{
        for(int i=9; i>0; i--){
                if(n>0){
                n = n - i;
                v.push_back(i);
                cnt++;
                }
        }
        st
        for(int i=1; i<cnt; i++){
            count = count + v[i];
        }
            if(v[0]!=1){
                v[0] = k - count;   
            }
        for(auto i:v){
            cout<<i;
        }
        cout<<endl;
    }
}
return 0;
}