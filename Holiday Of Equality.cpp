#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,i,max=0;
    int  sum=0;
    cin>>n;
    int a[n];
    
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max) { max = a[i] ;}
    }
    
    for(i=0;i<n;i++){
        sum =sum + (max - a[i]) ;
    }
    
    cout<<sum<<endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}