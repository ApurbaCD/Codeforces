#include<bits/stdc++.h>
using namespace std;
void ans(){
    int n,k,sum=1;;
    vector<int>v;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        if(c=='B'){
            v.push_back(i+1);
        }
    }
    int s=v.size();
    if(s==0){cout<<0<<"\n";
    return;}
    if(s==1){cout<<1<<"\n";
    return;}
    int f=v[0];
    int l;
    for(int i=0;i<s-1;i++ ){
        l=v[i+1];
        if(l-f+1>k){
        sum++;
        f=v[i+1];
        }
    }
    cout<<sum<<"\n";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){

        ans();
    }
}