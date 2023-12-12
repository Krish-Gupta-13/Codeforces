
#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		cout<<(n+1)/2<<endl;
		for(int i=1;i<=(n+1)/2;i++){
			cout<<i*3-2<<" "<<(n-i+1)*3-1<<endl;
		}		
	}
}
