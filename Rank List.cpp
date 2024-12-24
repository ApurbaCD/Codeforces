#include<bits/stdc++.h>
using namespace std;
struct st {
    int p;
    int t;
}co[1000],f;
bool  com(st a,st b){
    if(a.p==b.p){
        return a.t<b.t;
    }
    return a.p>b.p;
}

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n,k,cnt=0;
  cin>>n>>k;
  k--;
  for(int i=0;i<n;i++){
    cin>>co[i].p>>co[i].t;
  }
  sort(co,co+n,com);
  f.p=co[k].p;
  f.t=co[k].t;
  //cout<<f.p<<" "<<f.t<<endl;
  for(int i=0;i<n;i++){
    if((f.t==co[i].t)&&(f.p==co[i].p)){
        cnt++;
    }
  }
  cout<<cnt;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        ans();
    }
}