#include<bits/stdc++.h>
using namespace std ;
#define ll long long int 
void ans(){
    ll n,a,b,tmp=0;
    cin>>n>>a>>b;
    ll ar[n+1],pre[n+1];
    pre[0]=ar[0]=0;
    for(ll i=1;i<=n;i++){
        cin>>ar[i];
        pre[i]=pre[i-1]+ar[i];

    }
    ll mn=pre[n]*b;
    ll con=ar[1]*b;
    for(ll i=1;i<=n;i++){
        tmp=con+(ar[i]*a) + (pre[n]-pre[i]-ar[i]*(n-i))*b;
        mn = min(tmp,mn);
        if(i!=n)
        con=con+(ar[i+1]-ar[i])*b;
    }
    cout<<mn<<"\n";


}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ans();
    }
}