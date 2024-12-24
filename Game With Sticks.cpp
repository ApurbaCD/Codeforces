#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    int n,m,d;
    cin>>n>>m;
    if(n>m){
        d = m ;
    }
    else
        d = n ;
    if(d&1)
        cout<<"Akshat"<<endl;
    else
        cout<<"Malvika"<<endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}