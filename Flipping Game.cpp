#include<bits/stdc++.h>
using namespace std;
int check(vector<int>v,int n){
    int s=0;
    for(int i=1;i<=n;i++){
        if(v[i])s++;
    }
    //cout<<s<<endl;
    return s;
}

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,sum=0,s0=0,s1=0,mx=-1;
    bool b, b1=false;
    cin>>n;
    vector<int>v,v0,v1;
    v.push_back(0);
    v1.push_back(0);
    v0.push_back(0);
    for(int i=1;i<=n;i++){
        cin>>b;
        v.push_back(b);
    }
    for(int i=1;i<=n;i++){
        v1=v;
        for(int j=i;j<=n;j++){
            if(v[j])v1[j]=0;
            if(!v[j])v1[j]=1;
            int t=check(v1,n);
            if(t>mx){
                mx=t;
            }
        }
    }
    cout<<mx;
    // for(int i=1;i<=n;i++){
    //     if(v[i])s1++;
    //     else s0++;
    //    // cout<<s1<<"k "<<s0<<endl;
    //     v0.push_back(s0);
    //     v1.push_back(s1);
    //     cout<<v0[i]<<" "<<v1[i]<<endl; 
    // }
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}