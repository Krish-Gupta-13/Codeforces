// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;
// #define ll long long int
// #define llf long long float
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define nm cout<<"-1"<<endl;
// #define F first 
// #define S second
// #define pb push_back
// #define pf push_front
// #define ppb pop_back
// #define ppf pop_front
// #define st sort(v.begin(), v.end());
// #define stg sort(v.begin(), v.end(), greater<>());
// #define pi  3.14 
// //Jda mt soch code krte ja//
// int main(){
// ll t;
// cin>>t;
// while(t--){
// // vector<ll> v;
// // multiset<ll> v;
// ll n,k;
// cin>>n>>k;
// ll num = n;
// for(ll i=0; i<k-1; i++){
//     ll clo = num;
//     ll mx=0;
//     ll mn=9;
//     while(clo>0){
//         ll x = clo%10;
//         if(clo%10==0)
//         break;
//         clo = clo/10;
//         // v.insert(x);
//         mx = max(mx, x);
//         mn = min(mn,x);
//     }
//     // num = num + (*v.begin()) * (*v.rbegin());
//     num = num + mn*mx;
//     // v.clear();
// }
// cout<<num<<endl;
// }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;

long long int cal(long long int n){
    long long int mx = 0 , mn = 9 ;
    if(n == 0) return 0 ;
    while(n){
        mx = max(mx,n%10) ;
        mn = min(mn,n%10) ;
        n /= 10 ;
    }
    return mx*mn ;
}
bool is_zero(long long int n){
    
    while(n){
        if(n%10 == 0){
            return true ;
        }
        n /= 10 ;
    }

    return false ;
}

void solve() {

    long long int n , k ;
    cin >> n >> k;
    long long int last = 0 ;
    long long int st = n ;
    for(int i = 0 ; i < k-1 ; i++){
        st = st + cal(st) ;
        if(is_zero(st)){
            
            break ;
        }
    }
    cout << st << endl ;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++){
        solve();
    }

    return 0;
}