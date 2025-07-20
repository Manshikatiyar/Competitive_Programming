#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    sort(n.begin(),n.end());
    int count=0;
    for(int i=0;i<n.size();i++){
    if(n[i]!=n[i+1])
    count++;}
    count++;
    if(count%2==0)
    cout<<"IGNORE HIM!"<<endl;
    else
    cout<<"CHAT WITH HER!"<<endl;
}