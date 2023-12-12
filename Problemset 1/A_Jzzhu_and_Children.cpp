#include<bits/stdc++.h>
#include<iomanip>
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
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
int n,m;
cin>>n>>m;
for(int i=0; i<n; i++){
    int ele; 
    cin>>ele;
    v.push_back(ele);
}
// while(v.size()>1){
for(int i=0; i<n; i++){
    if(v[i]-m <= m){
        v.erase(remove(v.begin(), v.end(), v[i]), v.end());
    }
    else{
        int tt = v[i];
       v.erase(remove(v.begin(), v.end(), v[i]), v.end());
        v.push_back(tt);
    }
}
    cout<<i<<endl;
    // }
    return 0;
}












// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;
// #define ll long long int
// #define llf long long float
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define nm cout<<"-1"<<endl;
// #define pb push_back
// #define pf push_front
// #define ppb pop_back
// #define ppf pop_front
// #define st sort(v.begin(), v.end());
// #define stg sort(v.begin(), v.end(), greater<>());
// #define pi  3.14 
// //Jda mt soch code krte ja//
// int main(){
// ll count = 0;
// vector<int> v;
// vector<int> q;
// int arr[100000];
// ll n,m;
// cin>>n>>m;
// for(int i=0; i<n; i++){
//     int e;
//     cin>>e;
//     v.pb(e);
// }
// vector<int> b;
// for(int i=0; i<n; i++){
//     int t = v[i]%3;
//     b.pb(t);
// }
// int index;
// sort(b.begin(), b.end(), greater<>());
// int z = b[0];
// reverse(v.begin(), v.end());
// vector<int>::iterator it = find(v.begin(), v.end(), z);
// if(it!=v.end()){
//     index = distance(v.begin(), it);
// }
// std::cout<<n-index<<endl;

// return 0;
// }


