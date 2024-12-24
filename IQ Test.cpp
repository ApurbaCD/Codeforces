#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  char a[4][4];
  for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
         cin>>a[i][j];
      }
  }
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        int s=0;
        char tmp=a[i][j];
        //cout<<i<<" "<<j<<" "<< tmp<<" "<< endl;
            if(tmp==a[i+1][j]){
               //cout<<tmp<<" "<<a[i+1][j]<<" "<<endl;
               s++;
            }
            if(tmp==a[i][j+1]){
                //cout<<tmp<<" "<<a[i][j+1]<<" "<<endl;
                s++;
            }
            if(tmp==a[i+1][j+1]){
                s++;
            }
            if(s>=2||s==0){
                //cout<<i<<" "<<j<<" "<<s<< endl;
                cout<<"YES";
                return;
                }
        }
  }
  cout<<"NO";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        ans();
    }
}