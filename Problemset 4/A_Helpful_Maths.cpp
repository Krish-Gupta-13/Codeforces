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
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
//Jda mt soch code krte ja//
void solve(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
int arr[100000];
  string s;
  cin>>s;
  int n = s.length();
  string str = "";
  string strr = "";
  int one = 0;
  int two = 0;
  int three = 0;
  for(int i=0; i<n; i++){
    if(s[i]=='1'){
        one++;
    }
    else if(s[i]=='2'){
        two++;
    }
    else if(s[i]=='3'){
        three++;
    }
  }
  for(int i=0; i<one; i++){
    str = str + "1+";
  }
  for(int i=0; i<two; i++){
    str = str + "2+";
  }
  for(int i=0; i<three; i++){
    str = str + "3+";
  }
  for(int i=0; i<n; i++){
    // cout<<str<<endl;
    strr = strr + str[i];
  }
  cout<<strr<<endl;
}


int main(){
  solve();
return 0;
}