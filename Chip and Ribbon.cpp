#include<bits/stdc++.h>
using namespace std;
#define ll                long long int
#define ull               unsigned long long int 
//#define vec             vector<ll>
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

vec v;
ll n,x,mx=-1,sum=0;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    mx=-1;sum=0;
    ll s=0;
    bool b1=1;
    cin>>n;
    loop(i,0,n-1){
        cin>>x;
        v.push_back(x);
    }
    sum=v[0]-1;
    loop(i,1,n-1){
        if(v[i]>v[i-1]){
            sum+=v[i]-v[i-1];
        }
    }

   
    cout<<sum<<"\n";
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
        v.clear();
        ans();
    }
}