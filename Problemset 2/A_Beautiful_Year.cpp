// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;
// #define ll long long int
// #define llf long long float
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define nm cout<<"-1"<<endl;
// #define pb push_back
// #define pf push_front
// #define ppb pop_back
// #define ppf pop_front
// #define st sort(v.begin(), v.end());
// #define stg sort(v.begin(), v.end(), greater<>());
// #define pi  3.14 
// //Jda mt soch code krte ja//
// int main(){
// int n,a,b,c,d;
// cin>>n; 
// while(a==b || a==c || a==d || b==c || b==d || c==d){
//     n++;
//     a = (n/1000)%10;
//     b = (n/100)%10;
//     c = (n/10)%10;
//     d = n%10;
// }
// cout<<n<<endl;
// return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, a1,a2,a3,a4;
//     cin>>a;
//     while(a1 == a2 || a1 == a3 || a1 == a4 || a2 == a3 || a2 == a4 || a3 == a4){
//         a++;
//         a1= a / 1000;
//         a2= (a / 100) % 10;
//         a3= (a / 10) % 10;
//         a4= a % 10;
//     }
//     cout<<a;
// }

#include <iostream>
using namespace std;
 
int main()
{
    int y,a,b,c,d;
    cin>>y;
    while(true){
        y++;
         a = y / 1000;
         b = y / 100 % 10;
         c = y / 10 % 10;
         d = y % 10;
 
         if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << y << endl;
}