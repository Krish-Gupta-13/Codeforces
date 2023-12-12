#include <bits/stdc++.h> 
#define ll long long int
using namespace std; 
int main() { 
   string s1,s2;
   cin>>s1>>s2;
   int num=0; 
   int num1=0;
    int n = s1.length(); 
    for (int i = 0; i < n; i++) 
        num = num * 10 + (int(s1[i]) - 48);
int m = s2.length(); 
    for (int i = 0; i < m; i++) 
        num1 = num1 * 10 + (int(s2[i]) - 48);
// cout<<num*num1<<endl;
ll ans = num*num1;
cout<<to_string(ans)<<endl;
    return 0; 
} 