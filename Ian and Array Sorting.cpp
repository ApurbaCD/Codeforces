#include<bits/stdc++.h>
using namespace std;
int  ans(){
   long long  int n;
    cin>>n;
    vector<long long int>v1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    if(n%2==1){
        cout<<"YES\n";
        return 0;
    }
    for(int i=0;i<n-1;i++){
        if(v1[i]>0){
            v1[i+1]=v1[i+1]-v1[i];
             v1[i]=0;

        }
        else{
            v1[i+1]=-v1[i]+v1[i+1];
            v1[i]=0;
        }
    }
    if(v1[n-1]<0){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
    return 0;
    // for(int i=0;i<n;i++){
    //     cout<<v1[i]<<" ";
    // }
    // cout<<"\n";
}

int main(){
      ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}