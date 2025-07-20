#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int res=0;
    if(m==n){
        cout<<0;
        return 0;

    }else if(m%n==0){
        int a=m/n;
        while(a%2==0)a/=2,res++;
        while(a%3==0)a/=3,res++;
        if(a!=1)res=-1;}
        
       else if(m%n!=0)res=-1;
        cout<<res;
        return 0;
    }