#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long  n,x;
    cin>>n;
    vector<long long >v1={0},v2={0},v3={0};
    for(long long  i=1;i<=n;i++){
        cin>>x;
        v1.push_back(x);
        v2.push_back(v2[i-1]+x);
    }
    sort(v1.begin(),v1.end());
    for(long long  i=1;i<=n;i++){
        v3.push_back(v3[i-1]+v1[i]);
    }
    long long  t;
    cin>>t;
    for(long long  i=0;i<t;i++){
        long long  tp,l,r;
        cin>>tp>>l>>r;
        if(tp&1){
            cout<<v2[r]-v2[l-1]<<"\n";
        }
        else{
            cout<<v3[r]-v3[l-1]<<"\n";
        }
    }
}

int  main(){
  ios::sync_with_stdio(false);cin.tie(0);
    long long  t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}