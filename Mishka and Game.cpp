#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
        int t,ms=0,cr=0,dr=0;
        cin>>t;
        while(t--){
            int m,c;
            cin>>m>>c;
            if(m>c)
                ms++;
            else if(c>m)
                cr++;
            else
                dr++;
        }
        if(ms>cr){
            cout<<"Mishka"<<endl;
        }
        else if(cr>ms){
            cout<<"Chris"<<endl;
        }
        else{
            cout<<"Friendship is magic!^^"<<endl;
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