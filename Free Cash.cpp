#include<bits/stdc++.h>
using namespace std;
struct time{
    int m,h;
}a[1000000+7];

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n,sum=1,mx=1;
  cin>>n;
  cin>>a[0].h>>a[0].m;
  for(int i=1;i<n;i++){
      cin>>a[i].h>>a[i].m;
      if((a[i].h==a[i-1].h)&&(a[i].m==a[i-1].m)){
        sum++;
      }
      else sum=1;
      mx=max(sum,mx);
  }
  cout<<mx;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}