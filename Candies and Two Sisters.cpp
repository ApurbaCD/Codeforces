#include<bits/stdc++.h>
using namespace std;

void ans(){
//  freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
          int n;
          cin>>n;   
          if(n&1)
             cout<<(n/2)<<endl;
          else
             cout<<(n/2)-1<<endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}