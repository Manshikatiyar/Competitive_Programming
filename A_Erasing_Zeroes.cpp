// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char s[100];
    cin>> s;
    //cout <<strlen(s);
    for (int m=0;m<strlen(s);m++){
        if (s[m]=='0'){
            if (s[m-1]='1' || s[m+1]=='1'){
                for (int i=m;i<strlen(s);i++){
                    s[i]=s[i+1];
                }
            }for (int j=0;j<strlen(s);j++){
                cout <<s[j];
            }cout <<endl;
        }
    }
    return 0;
}