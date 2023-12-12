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
vector<ll> v;
  
}
   bool dfs(vector<int> &visited, vector<int> adj[], int v, vector<bool> &pathvis){
        pathvis[v] = true;
        visited[v] = 1;
        for(auto i:adj[v]){
            if(visited[i]==0){
                if(dfs(visited, adj, i, pathvis)==true)
                    return true;
            }
            else if(visited[i]==1){
                return true;
            }
        }
        visited[v] = 2;
        return false;
    }
    
    bool isCyclic(int v, vector<int> adj[]) {
        vector<int> visited(v, 0);
        vector<bool> pathvis(v, false);
        for(int i=0; i<v; i++){
            if(visited[i]==0){
                if(dfs(visited, adj, i, pathvis)==true)
                    return true;
            }
        }
        return false;
        
    }

int main(){
    ll n;
    cin>>n;
    vector<int> adj[n];
    vector<int> v(n);
    for(int i=1; i<=n; i++){
        cin>>v[i];
        adj[i].pb(v[i]);
    }
  isCyclic(n, adj);
//  }
return 0;
}