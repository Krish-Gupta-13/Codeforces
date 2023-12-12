// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
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
// void countfreq(string* str, int n){
//     vector<int> v;
//     int e;
//     int count = 0; 
//     int cnt = 0;
//     unordered_map<string, int> mp;
//     for(int i=0; i<n; i++){
//         mp[s[i]]++;
//     }
//     for(auto i : mp){
//         e = i.second;
//         v.push_back(e);
//     }
//     for(int i=0; i<n; i++){
//         count = count + v[i];
//         cnt++;
//     }
//     int q = count + cnt; 
//     cout<<q<<endl;

// }
// int main(){
// int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     countfreq(s, n);

// }
// return 0;
// }

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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            count = count + 2;
        }
    }
    cout<<count<<endl;

}
return 0;
}