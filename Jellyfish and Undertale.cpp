#include<bits/stdc++.h>
using namespace std;
void ans(){
    long long  b,a,n,x,s1=0,sum=0;
    cin>>a>>b>>n;
    sum=b;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>=a){
            x=a;
            sum-=1;
        }
        sum+=x;
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