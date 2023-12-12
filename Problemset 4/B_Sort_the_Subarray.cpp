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
int arr1[100000];
int n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
for(int i=0; i<n; i++){
    cin>>arr1[i];
}
for(int i=0; i<n; i++){
    if(arr[i]!=arr1[i]){
        while(arr[i]!=arr1[i]){
            
        }
    }
}
int start = v[0];
int end = v[v.size()-1];
if(count==0){
    cout<<n<<endl;
    cout<<1<<" "<<n<<endl;
    return;
}
while(arr[start]==arr1[start] && start>=0){
    count++;
    start--;
}
while(arr[end]==arr1[end] && end<n){
    count++;
    end++;
}

cout<<start+1<<" "<<end+1<<endl;

}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}