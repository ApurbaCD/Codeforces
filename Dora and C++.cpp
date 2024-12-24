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
    ll n,a,b,gcd,mn=INT_MAX;
    cin>>n>>a>>b;
    gcd=__gcd(a,b);
    // cout<<gcd;
    vector<ll>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        x=x%gcd;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    mn=v[n-1]-v[0];
    for(int i=0;i<n-1;i++){
        ll tmp = v[i]+gcd-v[i+1];
        mn=min(mn,tmp);
    }
    cout<<mn;
    endline;


}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}