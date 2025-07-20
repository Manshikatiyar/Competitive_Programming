#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int array[6];
        int total=0,count=1;
        for(int i=1;i<6;i++){
            array[i]=n%10;
            n=n/10;
            if(array[i]!=0){
                total++;
            }
            
        }
        cout<<total<<endl;
        for(int i=1;i<6;i++){
            if(array[i]!=0){
                cout<<array[i]*count<<" ";
            }
            count=count*10;
        }
       cout<<"\n"; 
    }
    return 0;
}