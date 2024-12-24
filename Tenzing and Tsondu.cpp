#include<bits/stdc++.h>
using namespace std;
void ans(){
    int n,m;
    cin>>n>>m;
   long long  int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum1+=x;
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        sum2+=x;
    }
    if(sum1>sum2){
        cout<<"Tsondu\n";
    }
    else if(sum2>sum1){
        cout<<"Tenzing\n";
    }
    else{
        cout<<"Draw\n";
    }


}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
    int t;
    cin>>t;
    while(t--){

        ans();
    }
}