#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void ans(){
    long long n,m,d,x,sum=1,prex,mn=0;
    cin>>n>>m>>d;
    long long int a[m+1],index=0,b[m+1];
    b[0]=a[0]=prex=1;
    for(ll i=1;i<=m;i++){
        cin>>x;
        a[i]=x;
        if(x==1){
            b[i]=1;
            continue;
        }
        if(x-prex>=d){
           if((x-prex)%d==0)sum=sum+(x-prex)/d;
           else sum+=1+(x-prex)/d;
        }
        else sum++;
        prex=x;
        b[i]=sum;  
    }
    sum=sum+(n-a[m])/d;
    ll tmp;
    for(int i=1;i<=m;i++){
    if(i!=m)tmp=b[i+1]-b[i-1]-1;
    else tmp=sum-b[i-1];
    if(m!=i)prex=(a[i+1]-a[i-1]-1)/d;
    else prex=(n-a[i-1])/d;
    //cout<<tmp<<" "<<prex<<endl;
    mn=max(mn,tmp-prex);
    }
    //cout<<mn<<" "; that is for  the minimum number of cookies 
    //that Petya can eat if exactly one cookie seller is removed 
    cout<<sum-mn<<" ";
    for(int i=1;i<=m;i++){
    if(i!=m)tmp=b[i+1]-b[i-1]-1;
    else tmp=sum-b[i-1];
    if(m!=i)prex=(a[i+1]-a[i-1]-1)/d;
    else prex=(n-a[i-1])/d;
    cout<<tmp<<" "<<prex<<endl; //a[1]==1 hole tmp=prex asbe;tai hoia jabe;
    if(tmp-prex==mn)index++; 
    }
    cout<<index<<"\n";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}