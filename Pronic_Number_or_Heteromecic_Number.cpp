#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int i=0,f=0;
    while(i*(i+1)<=n){
        if(i*(i+1)==n) {
           cout<<"YES";
           f=1;
           break;
        }
        i++;
    }
    if(f==0) cout<<"NO";
}