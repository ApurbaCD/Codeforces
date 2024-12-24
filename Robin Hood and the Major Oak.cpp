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
    int n,k,odd=0,s,l;
    cin>>n>>k;
    l=n;
    s=n-k+1;
    int tmp =l-s+1;
    if(tmp%2==0){
        if((tmp/2)%2==0){
            yes;return;
        }
        no;return;
    }
    else{
        int tmp1=tmp/2;
        if(s%2==1){
            tmp1++;
        }
        if(tmp1%2==0){
            yes;
            return;
        }
        no;return;
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