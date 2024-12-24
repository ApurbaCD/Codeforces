#include<bits/stdc++.h>
using namespace std;
#define ll long long 
// ll gcd(ll xf,ll yf){
//     if(yf==0)return xf;
//     return gcd (yf,xf%yf);
// }
void ans(){
    ll n,x,y,xf,yf,cf,sum=0;
    ll tmp;
    cin>>n>>x>>y;
    xf = n/x; yf = n/y;
    tmp=__gcd(x,y);
    ll lcm=(x*y)/tmp;
    cf =n/lcm;     
    xf -= cf;
    yf -= cf;
    ll pos = (n*(n+1)-((n-xf)*(n-xf+1)))/2; 
    sum+=pos;
    ll neg=yf*(yf+1)/2;
    sum=sum-neg;
    cout<<sum<<"\n";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ans();
    }
}