#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
  int n,tmp,cnt=0;
  cin>>n>>tmp;
  int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(5-a[i]>=tmp)
        cnt++;
  }
  cout<<cnt/3<<endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}