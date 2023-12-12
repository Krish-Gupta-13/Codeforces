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
int main(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
vector<ll> ans;
// int arr[100000];
int arr1[100000];
int arr[6][6];
int row, col;
for(int i=1; i<=5; i++){
    for(int j=1; j<=5; j++){
        cin>>arr[i][j];
        if(arr[i][j]==1){
            row = i;
            col = j;
        }
    }
}
// for(int i=1; i<=5; i++){
//     for(int j=1; j<=5; j++){
        
//     }
// }
cout<<abs(3-row)+abs(3-col)<<endl;

return 0;
}