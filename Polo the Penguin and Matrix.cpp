#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    int n,m,d,x,mx=INT_MAX,sum=0;
    cin>>n>>m>>d;
    bool b1=false;
    vector<int>v;
    n=n*m;;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
      sum=0;b1=false;
      for(int j=0;j<n;j++){
        int tmp=abs(v[j]-v[i]);
        //cout<<tmp<<endl;
        if(tmp%d==0){sum+=tmp/d;}
        else{b1=true;break;}
        //cout<<"S"<<sum<<endl;
      }
      if(!b1)
      mx=min(sum,mx);
    }
    if(mx==INT_MAX){cout<<-1;return;}
    cout<<mx<<"\n";

}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--){
        ans();
    }
}