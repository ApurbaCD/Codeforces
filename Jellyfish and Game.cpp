#include<bits/stdc++.h>
using namespace std;
#define val 1e9+7
void ans(){
     long long  n,m,k,x,sum1=0,sum2=0;
    vector< long long >v1,v2;
    cin>>n>>m>>k;
    for( long long  i=0;i<n;i++){
        cin>>x;
        v1.push_back(x);
        sum1+=x;
    }
    for( long long  i=0;i<m;i++){
        cin>>x;
        v2.push_back(x);
        sum2+=x;
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<n;i++){
        //cout<<v1[i]<<" ";
    }
    if(k&1){
        if(v1[0]>=v2[m-1]){
            cout<<sum1<<"\n";
        }
        else{
            cout<<(sum1-v1[0]+v2[m-1])<<"\n";
        }
        return;
    }
    else{
        if(v1[0]>=v2[m-1]){
                cout<<(sum1-v1[n-1]+v2[0])<<"\n";
        }
        else{
            if(v1[n-1]<v2[m-1]){
                cout<<(sum1-v1[0]+min(v2[0],v1[0]))<<"\n";
            }
            else{
                cout<<(sum1-v1[n-1]-v1[0]+v2[m-1]+min(v1[0],v2[0]))<<"\n";
            }
        }
    }
}

  int  main(){
  ios::sync_with_stdio(false);cin.tie(0);
     long long  t;
    cin>>t;
    while(t--){

        ans();
    }
}