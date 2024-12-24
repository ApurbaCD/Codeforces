#include<bits/stdc++.h>
using namespace std;
void ans(){
    long long int n,sum=0;
    cin>>n;
    while(n>0){
        sum=sum+n;
        n=n/2;
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