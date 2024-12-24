#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    int n,a,b,c,c1=0,c2=0,cnt3=0,n1,n2,n3;
    cin>>n>>a>>b>>c;
    n3=n2=n1=n;
    int ar[3]={a,b,c};
    sort(ar,ar+3);
    n1=n/ar[0];n2=n/ar[1];
    if(n%ar[0]==0){
        //cout<<n/ar[0];
        return;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            c2=n-(ar[0]*i)-(ar[1]*j);
            if(c2<0) break;
            if( c2%ar[2]==0){
                    c1=max(c1,(i+j+(c2/ar[2])));
                    // cout<<"KL"<<c1<<endl;
                }
        }
    }
   // cout<<c1;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        ans();
    }
}