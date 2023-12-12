//Code bhi krle kitna game khelega//
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
string s;
cin>>s;
string str;
for(int i=1; i<s.length(); i++){
    str=s[0];
    }

// for(int i=0; i<s.length(); i++){
//      if((s[0]>96 && s[0]<123) || (s[i]>96 && s[i]<123)){
//         count++;
//      }
//     if(count>1){
//             str = str + s[i];
//         }
// }

for(int i=1; i<s.length(); i++){
    if((s[0]>96 && s[0]<123) || (s[i]>96 && s[i]<123)){
        count++;
        // if(count>1){
        //     str = str + s[i];
        // }
    }
    if(count>1){
            str = str + s[i];
        }
    else if((s[0]>96 && s[0]<123) && (s[i]>64 && s[i]<91)){
        str=toupper(s[0]);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        str = str + s[i];
    }

    else if(s[i]>64 && s[i]<91){
        str=tolower(s[0]);
        transform(s.begin(), s.end(), s.begin(), ::tolower);   
        str = str + s[i];
    }

    else{
        // str=s[0];
        str = str + s[i];
    }
}

cout<<str<<endl;
return 0;
}