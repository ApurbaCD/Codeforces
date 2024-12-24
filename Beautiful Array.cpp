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
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    ll tmp1 = k*b;
    ll tmp2 = tmp1+(n*(k-1));
    if(s>=tmp1&&s<=tmp2){
        ll ans=tmp1;
        k=k-1;
        for(int i=0;i<n;i++){
            if(s-ans-k<0){
                cout<<s<<" ";
                ans=k;
                s=0;
            }
            else{
                cout<<ans+k<<" ";
                s=s-ans-k;
                ans=0;
            }
        }
        endline;return;
    }
    cout<<-1<<endl;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}