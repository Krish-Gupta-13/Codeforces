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
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
void solve(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
int arr[100000];
int n,m;
cin>>n>>m;
priority_queue<int> pq;
pq.push(n);
int x = pq.top();
if(m>n){
    no
    return;
}
    if(x==m){
        yes
        return;
    }
    if(x%3==0){
        pq.pop();
        pq.push(x/3);
        pq.push(x/3*2);
    }
    // else{
        // no
        pq.pop();
        // return;
    // }
}

int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}


//Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;
// #define ll long long int
// #define llf long long float
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define nm cout<<"-1"<<endl;
// #define F first 
// #define S second
// #define pb push_back
// #define pf push_front
// #define ppb pop_back
// #define ppf pop_front
// #define st sort(v.begin(), v.end());
// #define stg sort(v.begin(), v.end(), greater<>());
// #define pi  3.14 
// //Jda mt soch code krte ja//

// int helper(int n, int m){
//     if(n==m)
//     return 1;
//     if(n%3==0){
//         int ans = helper(n/3, m);
//         ans = ans | helper(n/3*2, m);
//         return ans;
//     }
//     else
//         return 0;
// }
// void solve(){
// ll count = 0;
// ll count1 = 0;
// vector<ll> v;
// int arr[100000];
// int n,m;
// cin>>n>>m;
// if(m>n){
//     no
//     return;
// }
// if(helper(n,m)){
//     yes
// }
// else{
//     no
// }
// }
// int main(){
// ll t;
// cin>>t;
// while(t--){
// solve();
// }
// return 0;
// }