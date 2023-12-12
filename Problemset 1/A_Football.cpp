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
vector<int> v;
vector<int> b;
int arr[100000];
int n;
cin>>n;
// string s;
vector<string> s;
for(int i=0; i<n; i++){
    string a;
    cin>>a;
    s.pb(a);

}
sort(s.begin(), s.end());
for(int i=0; i<n; i++){
    if(s[0]==s[i]){
        count++;
    }
    else{
        break;
    }
}
if(count > n-count){
    cout<<s[0]<<endl;
}
else{
    cout<<s[n-1]<<endl;
}
return 0;
}