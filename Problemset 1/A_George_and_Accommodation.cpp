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
vector<int> v;
vector<int> b;
int arr[100000];
int n;
cin>>n;
for(int i=0; i<n*2; i++){
    cin>>arr[i];
}
for(int i=0; i<n*2; i=i+2){

    if(arr[i+1]>=arr[i]+2){
        count++;
        // i++;
    }

}
cout<<count<<endl;

return 0;
}