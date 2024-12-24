#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
        int n,i;
         cin>>n;
        if((n/2)%2) cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(i=0;i<n;i+=2) 
                  cout<<i+2<<" ";
            for(i=0;i<n-2;i+=2) 
                  cout<<i+1<<" ";
            cout<<i+1+(n/2)<<"\n";
        }
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}