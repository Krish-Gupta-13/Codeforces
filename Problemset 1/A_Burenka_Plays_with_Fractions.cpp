#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    int e,f,g,h;
    e = b;
    f = d;
    g = a;
    h = c;
    int x,y;
    x = a/b;
    y = c/d;
    if(a==0 && c==0){
        cout<<"0"<<endl;
    }
    
    else if(a==0 || c==0){
        cout<<"1"<<endl;
    }
    else if(a/b==c/d){
        cout<<"0"<<endl;
    }
    else if(b==d){
        cout<<"1"<<endl;
    }
    else if((g%h==0 && e%f==0) || (g%h==0 && f%e==0) || (h%g==0 && e%f==0) || (h%g==0 && f%e==0)){
        cout<<"1"<<endl;
    }
    else{
        cout<<"2"<<endl;
    }
    
}
return 0;
}