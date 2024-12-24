#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
     set<int >c;
    int h;
    for(int i=0;i<4;i++)
    {
        cin>>h;
        c.insert(h);
    }
    int tmp =c.size();
    cout<<4-tmp<<"\n";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}