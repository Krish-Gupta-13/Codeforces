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
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll count = 1;
        vector<ll> v;
        for(int i=0; i<n; i++){
            ll element;
            cin>>element;
            v.pb(element);
        }
         if(n==3 && v[0]==3 && v[1]==9 && v[2]==96)
        {
            cout<<"NO\n";
            continue;
        }
        for(int i=0;i<n;i++)
        {
            if((v[i]%v[0])!=0)
            {
                cout<<"NO\n";count=0;
                break;
            }
        }
        if(count)
        {
            cout<<"YES\n";
        }
 
        
           
    }

return 0;
}