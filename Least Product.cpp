#include<bits/stdc++.h>
using namespace std;
#define ll                long long int 
#define ull               unsigned long long int 
//#define vec             vector<int>
//copy from Mrinal da
#define vec               vector<ll>
#define vsort(v)          (v.begin(),v.end())
#define endline           cout<<"\n"
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define loop(i,a,b)       for(ll i=a;i<=b;i++)
#define loop1(i,a,b)      for(ll i=a;i>=b;i--)
const ll siz=2e5+7;
const ll INF=__LONG_LONG_MAX__;



void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,sp=0,x,sn=0,spi=-1,sni=-1,sz=0;
    cin>>n;
    loop(i,0,n-1){
        cin>>x;
        if(x==0)sz++;
        else if(x>0){
            sp++;spi=i+1;
        }
        else{
            sn++;sni=i+1;
        }
    }
    if(sz){cout<<0;endline;return;}
    if(sn%2!=0){cout<<0;endline;return;}
    cout<<1<<"\n";
    if(sni!=-1){
        cout<<sni<<" "<<0;
        endline;return;
    }
    if(spi!=-1){
        cout<<spi<<"  "<<0;
        endline;return;
    }
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}