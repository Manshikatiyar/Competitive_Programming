#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int a=0;
    for(int i=1;i<=w;i++)
    a+=i*k;
    if((a-n)>0)cout<<(a-n)<<endl;
    else
    cout<<0<<endl;
}