#include <bits/stdc++.h>
using namespace std;

signed main()
{
   string s;
   cin>>s;
   string q;
   for(int i=0;i<s.size();i++){
      if(s[i]!='+'){
         q+=s[i];
      }
   }
   sort(q.begin(),q.end());
   int cnt=0;
   for(int i=0;i<q.size();i++){
      if(cnt ==q.size()-1){
         cout<<q[i];
      }
      else{
      cout<<q[i]<<"+";cnt++;
      }
   }
}