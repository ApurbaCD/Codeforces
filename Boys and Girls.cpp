#include<bits/stdc++.h>
using namespace std;
void ans(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  int n,x;
  vector<pair<int,int>>v;
  bool b=true;
  cin>>n;
  n=n*2;
  for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(make_pair(x,i+1));
  }
  sort(v.begin(),v.end());
  for(int i=0;i<n;i+=2){
    if(v[i].first!=v[i+1].first){
      b=false;
    }
  }
  if(!b){
    cout<<-1;
    return ;
  }
  for(int i=0;i<n;i+=2){
     cout<<v[i].second<<" "<<v[i+1].second<<"\n";
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