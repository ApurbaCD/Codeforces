#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  	    int n;
        cin>>n;
        int a[n],b[n];
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        for(int i=1;i<=n;i++){   
           for(int j=1;j<=n;j++){
                if( i==b[j])cout<<j<<" ";
            }
        }
        cout<<endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}