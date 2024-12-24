#include<bits/stdc++.h>
using namespace std;
void ans(){
    long long n,x,h=0,v=-1,l;
    cin>>n>>x;
    long long a[n+1],s[n+1],ar[n+1];
    for(long long i=1;i<=n;i++){
        cin>>a[i];
    }
    a[0]=0; s[0]=0;
    sort(a,a+(n+1));
    s[1]=a[1]; ar[1]=0;
    for(long long  i=2;i<=n;i++){
        s[i]=s[i-1]+a[i];
        ar[i]=(a[i]*i)-s[i];
        //cout<<ar[i]<<" ";
        if((ar[i]>x)&&(v==-1)){
            v=i;
            l=v;
        }
    }
    if(ar[n]<=x){
        h=x-ar[n];        //cout<<a[n]*(n-1)-s[n-1];
        long long  tmp=h/n;
         cout<<tmp+a[n]<<"\n";
         return;
    }
        h=x-ar[v-1];
        long long  tmp1=h/(v-1);
         cout<<tmp1+a[v-1]<<"\n";
         return;
}

  int  main(){
  ios::sync_with_stdio(false);cin.tie(0);
    long long t;
    cin>>t;
    while(t--){
        ans();
    }
}