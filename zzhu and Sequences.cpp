#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
int  ans(int x,int y,int n){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
     n=n%6;
     int tmp;
     if(n==0) tmp=x-y;
     else if(n==1) tmp=x;
     else if(n==2) tmp=y;
     else if(n==3) tmp=y-x;
     else if(n==4) tmp=-x;
     else if(n==5) tmp=-y;
     tmp=tmp%m;
     if(tmp<0) tmp+=m;
     return tmp;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    int x,y,n;
    cin>>x>>y>>n;
    while(t--){
        cout<<ans(x,y,n);
    }
    //cout<<"KL"<<((-1)%1000000007);
}