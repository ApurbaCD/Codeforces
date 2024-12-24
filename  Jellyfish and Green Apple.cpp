#include<bits/stdc++.h>
using namespace std;
#define k 10000000
int a[k];
void ans(){
    int n,m,sum=0;
    cin>>n>>m;
    while(1){
      if(n<m){
        n=n*2;
        if(a[n]==1){
        cout<<-1<<"\n";
        return;
      }
        sum=sum+n/2;
      }
      else if(n>=m){
      int tmp=n/m;
      n=n-(tmp*m);
      if(n==0){
        cout<<sum<<"\n";
        return;
      }
      }
      a[n]=1;
    }
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
     ans();
    }
}