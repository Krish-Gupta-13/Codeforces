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
#define ppb pop_back
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define frr(i,a,b) for(ll i=a;i>=b;i--)
#define pi  3.14 
#define mod 1e9+7
// Jda mt soch code krte ja //

// Maths //
ll gcd(ll a, ll b){ if(b==0) return a; return gcd(b, a%b);} 
ll lcm(ll a, ll b){ return (a/gcd(a,b)*b); }
void solve(){
ll count = 0;
ll count1 = 0;
vector<ll> v(4);
ll maxi = INT_MIN;
ll mini = INT_MAX;
for(int i=0; i<4; i++){
    cin>>v[i];
    maxi = max(maxi, v[i]);
    mini = min(mini, v[i]);
}
for(int i=0; i<4; i++){
    if(v[i]==maxi)
        count++;
    else  
        count1++;
}
if(maxi-mini!=1)
    nm
else{
    if(count==2 || count1==2){
        if(v[0]==v[1] && v[2]==v[3])
            cout<<maxi<<" "<<mini<<" "<<mini<<" "<<maxi<<endl; 
        // else        
        //     cout<<maxi<<" "<<mini<<" "<<mini<<" "<<maxi<<endl; 

    }
    else if(count==3){
        if(v[0]==maxi){
            cout<<maxi<<" "<<mini<<" "<<mini<<" "<<mini<<endl; 
        }
        else{
            cout<<mini<<" "<<maxi<<" "<<mini<<" "<<mini<<endl; 
        }
    }
    else if(count1==3){
        if(v[0]==mini){
            cout<<mini<<" "<<maxi<<" "<<maxi<<" "<<maxi<<endl; 
        }
        else{
            cout<<maxi<<" "<<mini<<" "<<maxi<<" "<<maxi<<endl; 
        }
    }
    else
        nm
        // cout<<"ad";
}
  
  
}

int main(){
  solve();
return 0;
}