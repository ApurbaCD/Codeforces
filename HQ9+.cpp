#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s;
    cin>>s;
    bool b1=false;
    for(int i=0;i<s.size();i++){
        if (s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            b1=true;break;
        }
    }
    if(b1){cout<<"YES";}
    else cout<<"NO";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}