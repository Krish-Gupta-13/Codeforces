// //------------------Code bhi krle kitna game khelega---------------------------//
// #include<bits/stdc++.h>
// #include<iomanip>
// #include<stdio.h>
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
// //-----------------------Jada mt soch code krte ja------------------------------//
// int main(){

// ll count = 0;
// ll count1 = 0;
// vector<ll> v;
// vector<ll> q;
// int s[100000];
// ll n;
// cin>>n;
// string s[n];
// vector<string> ss;
// for(int i=0; i<n; i++){
//     cin>>s[i];
//         ss.push_back(s[i]);
//     for(int j=0; j<n; j++){

//     //    if(s[i][j]==s[n-i-1][n-j-1]){
//     //     count = 1;
//     //    }
//     //    else{
//     //     count = 0; 
//     //    }
//   }
// }
// for(int i=0; i<n; i++){
    
// }
// for(auto i:ss){
//     cout<<i<<" ";
// }
// cout<<endl;
// if(count == 1){
//     yes
// }
// else{
//     no
// }



// return 0;
// }
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s[n];
    string ans = "YES";

    for (int i=0; i<n; i++){
        cin >> s[i];
    }
    for (int i = 0; i <= (n / 2); i++){
        if (i == (n / 2)){
            string temp = s[i];
     for (int i = 0; i < temp.length() / 2; i++) {
            if (temp[i] != temp[temp.length() - 1 - i]) {
                ans = "NO";
                break;
            }
         }
    }

    else if (s[i] != s[n - 1 - i]) {
        ans = "NO";
        break;
    }
}
    cout << ans << endl;
    return 0;
}
