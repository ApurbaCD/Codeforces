#include<bits/stdc++.h>
using namespace std;
bool a[1000000+7];
void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  
  long long  n,s=0;
    cin>>n;
    s=sqrt(n);
    if(n==1){cout<<"NO\n";return;}
    else if (s*s==n&&!a[s]){
        cout<<"YES\n";
        return;
    }
  cout<<"NO\n";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    long long  t;
    for(int i=2;i*i<=10000000+7;i++){
    if(!a[i]){
        for(int j=i*2;j<=1000000+7;j=j+i){
            a[j]=1;
        }
    }
  }
    cin>>t;
    while(t--){
        ans();
    }
}