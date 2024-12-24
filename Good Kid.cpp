#include<bits/stdc++.h>
using namespace std;
void ans(){
    bool b=true;
 int n,sum=1,mn=10;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
    mn=min(a[i],mn);
 }
 for(int i=0;i<n;i++){
    if(a[i]==mn&&b){
    b=false;
    sum=sum*(mn+1);
    continue;
    }
    sum=sum*a[i];
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