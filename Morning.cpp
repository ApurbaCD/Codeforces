#include<bits/stdc++.h>
using namespace std;

void ans(){
 // freopen("input.txt","r",stdin);
 // freopen("output.txt","w",stdout);
 int a[5],n,sum=0;
 a[0]=1;
 string s;
 cin>>s;
 for(int i=0;i<4;i++){
 n=s[i]-48;
 a[i+1]=n;
 if(a[i+1]==0)a[i+1]=10;
 }
 for(int i=1;i<=4;i++){
     sum+=abs(a[i-1]-a[i])+1;
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