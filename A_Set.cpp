#include <iostream>
using namespace std;
int main() {
    int t;  
    cin >> t;
    while (t--) {
        int l, r, k;
        cin >> l >> r >> k;
        int ans=r/k;
        ans=ans-l;
        if(ans<0){
            cout<<0<<endl;

        }else{
            cout<<ans+1<<endl;
        }}}