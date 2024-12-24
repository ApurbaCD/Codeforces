#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
      int n,p,b=0,q,c=0;
    vector<int>v;
    cin>>n>>p;

    for(int i=0;i<p;i++){
        cin>>b;
        v.push_back(b);
    }
    cin>>q;
    for(int i=p;i<p+q;i++){
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<p+q;i++){
        if(v[i]!=v[i+1])
        c++;
    }
    if(c==n) cout<<"I become the guy."<<"\n";
    else cout<<"Oh, my keyboard!"<<"\n";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}