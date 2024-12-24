#include<bits/stdc++.h>
using namespace std;
void ans(){
    int n,sum=0;
    cin>>n;
    for(int i=2;i<=n;i++){
       for(int j=i+1;j<=n;j++){
        int tmp = (i*i)+(j*j);
        int t=sqrt(tmp);
        if((t*t==tmp)&&(t<=n)){
            sum++;
        }
        }
    }
    cout<<sum<<"\n";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    while(t--){
        ans();
    }
}