#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d,e;
        d=-1,e=-1;
        cin>>a>>b>>c;
        
        if(a<c)d=1;
        if(b*a>c)e=b;
        cout<<d<<" "<<e<<endl;

    }
}