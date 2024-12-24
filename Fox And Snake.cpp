#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
            int n,m,x,i,j,tmp=0;
            cin>>n>>m;
            for(i=1;i<=n;i++){
                if(i%2==0){
                    if(tmp%2==1)
                    cout<<"#";
                    for(j=1;j<m;j++){
                        cout<<".";
                    }
                if(tmp%2==0)
                    cout<<"#";
                    tmp++;
                }
                else{
                    for(j=1;j<=m;j++){
                        cout<<"#";
                    }
                }
                cout<<endl;
            }
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
   // cin>>t;
    while(t--){
        ans();
    }
}