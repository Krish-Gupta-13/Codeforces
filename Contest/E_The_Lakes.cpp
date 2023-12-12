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



int DFS(int arr[][4], int drow[], int dcol[], int row, int col,int n, int m){
    int count = arr[row][col];
    arr[row][col]=0;
    for(int i=0; i<4;i++){
        int nrow = row + drow[i];
        int ncol = col + dcol[i];
        if(nrow<n && nrow>=0 && ncol>=0 && ncol<m && arr[nrow][ncol]!=0){
            count = count + DFS(arr, drow, dcol, nrow, ncol, n, m);
        }
    }
    return count;
}




void solve(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
int n,m;
cin>>n,m; 
int arr[n][m];
vector<vector<int>> v(n,m);
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>arr[i][j];
    }
}
int Max = 0;
int drow[]={-1,0,+1,0};
int dcol[]={0,+1,0,-1};
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(arr[i][j]>0){
            Max = max(Max, DFS(arr, drow, dcol, i, j, n ,m));
        }
    }
}
cout<<Max<<endl;


    
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}