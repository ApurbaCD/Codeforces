#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,s=4;
    cin>>n;
    n=n-10;
    if((n<1)||(n>11)){cout<<0;return;}
    if(n==1||n==11){cout<<4;return;}
    else{
        if(n==10){
            cout<<15;
        }
        else{
            cout<<4;
        }
    }

}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}