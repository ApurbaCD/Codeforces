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
    ll n,x,so=0,se=0;
    cin>>n;
    vec v;
    loop(i,0,n-1){
        cin>>x;
        if(x%2==0)se=1;
        else so=1;
        v.push_back(x);
    }
    if(so&&se){cout<<2;endline;return;}
    for(ll j=2;j<10000000000;j=j*2){
        ll tmp=0;
        loop(i,0,n-1){
            if(v[i]%j==0)tmp++;
        }
        if(tmp==n){
            cout<<j+1<<" ";endline;
            return;
        }
    }
    // loop(i,0,n-1){
    //     cout<<v[i]%3<<" ";
    // }
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}