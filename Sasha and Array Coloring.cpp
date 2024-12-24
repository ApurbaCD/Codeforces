#include<bits/stdc++.h>
using namespace std;
void ans(){
    int n,sum=0;
    cin>>n;
    vector<int>v1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    sort(v1.begin(),v1.end());
    if(n%2==0){
    for(int i=0;i<(n/2);i++){
        
        sum=abs(v1[i]-v1[n-i-1])+sum;
    }
    cout<<sum<<"\n";
    }
     else if(n%2==1){
    for(int i=0;i<=(n/2);i++){
        
        sum=abs(v1[i]-v1[n-i-1])+sum;
    }
    cout<<sum<<"\n";
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