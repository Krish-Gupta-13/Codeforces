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
#define ppb pop_back
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define frr(i,a,b) for(ll i=a;i>=b;i--)
#define pi  3.14 
#define mod 1e9+7
// Jda mt soch code krte ja //

// Maths //
ll gcd(ll a, ll b){ if(b==0) return a; return gcd(b, a%b);} 
ll lcm(ll a, ll b){ return (a/gcd(a,b)*b); }
void solve(){
ll count = 0;
ll count1 = 0;
  ll n,q;
  cin>>n>>q;
  long long arr[200010]={},mode[200010]={};
vector<ll> v(n); 
vector<ll> ans;
ll sum = 0;
  for(int i=0; i<n; i++){
    cin>>arr[i];
    sum = sum + arr[i];
  }
    ll lastf = -1;
    ll lasts = -1;
  for(int i=1; i<=q; i++){
    int x;
    cin>>x;
    // lastf = x;
    if(x==1){
        ll a,b;
        cin>>a>>b;
        if(mode[a]>lastf){
            sum = (ll)sum+b-arr[a];
            arr[a]= b;
            mode[a] = i;
        }
        else{
            sum = (ll)sum-lasts+b;
            arr[a] = b;
            mode[a] = i;                           
        }
    }
    else{
        ll a;
        cin>>a;
        lastf = i;
        ans.push_back(n*a);
        lasts = a;
        sum = (ll)n*a;
    }
    // lastf = x;
    cout<<sum<<endl;
  }
}

int main(){
  solve();
return 0;
}



#include <bits/stdc++.h>
using namespace std;
 
long long a[200010]={},mode[200010]={};
 
int main(){
	ios_base::sync_with_stdio(false);
	long long n,m;cin>>n>>m;
	long long sum=0;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	long long last_2=-1,last_2_num=-1;
	for (int i=1;i<=m;i++){
		long long x;cin>>x;
		if (x==1){
			long long k,b;cin>>k>>b;
			if (mode[k]>last_2){
				sum+=(long long)b-a[k];
				a[k]=b;mode[k]=i;
			}
			else{
				sum+=(long long)b-last_2_num;
				a[k]=b;mode[k]=i;
			}
		}
		else{
			long long k;cin>>k;
			last_2=i;last_2_num=k;
			sum=(long long)n*k;
		}
		cout<<sum<<"\n";
	}
}