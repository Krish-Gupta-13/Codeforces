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
    int n;
    cin>>n;
    int arr[100000];
    vector<int> v;
    for(int i=0; i<n; i++){
        // int elelment;
        // cin>>elelment;
        // v.push_back(elelment);
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; ){
            if(v[j]==v[i]){
                // remove.arr[j];
                // delete.(v[j]);
                // remove(0, n, v[j]);
                j++;
            }
            else{
                j++;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
return 0;
}