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
int main(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
ll arr1[100000];
ll arr3[100000];
ll n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];
}

for(int i=1; i<n; i++){
    for(int j=i; j<n-1; j++){
        if(arr[j]>=arr[j+1]){
            count++;
        }
        else{
            break;
        }
    }
    for(int k=i; k>0; k--){
        if(arr[k]>=arr[k-1]){
            count++;
        }
        else{
            break;
        }
    }
v.push_back(count);
count=0;
}

ll first;
for(int i=0; i<n-1; i++){
    if(arr[i]>=arr[i+1]){
        count++;
    }
    else{
        break;
    }
}
first = count;
v.push_back(first);
count=0;

for(int i=n-1; i>0; i--){
    if(arr[i]>=arr[i-1]){
        count++;
    }
    else{
        break;
    }
}
ll second;
second = count;
v.push_back(count);

stg
cout<<v[0]+1<<endl;
return 0;
}