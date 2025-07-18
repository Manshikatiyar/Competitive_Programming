#include<iostream>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int totaldrinks= totaldrinks/nl;
    int totalslices=c*d;
    int totalsalt=p/np;
    int ans=min(min(totaldrinks,totalslices),totalsalt)/n;
    cout<<ans<<"\n";
    return 0
}




