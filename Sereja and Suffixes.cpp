#include<bits/stdc++.h>
using namespace std;
map<int,int>mp; //using set we can solve this problem 
void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n,m,x;
  cin>>n>>m;
  int a[n+1],b[n+1];
  for(int i=1;i<=n;i++){
      cin>>a[i];   
  }
  for(int i=n;i>0;i--){
      mp[a[i]]=1;
      b[i]=mp.size();
      //cout<<b[i]<<" ";
  }
  for(int i=0;i<m;i++){
    cin>>x;
    cout<<b[x]<<"\n";
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