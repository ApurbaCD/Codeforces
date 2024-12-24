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
    int l,r,n,mx=0,m;
    cin>>n>>m;
    vector<int>v(n),ans;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mx=max(v[i],mx);
    }
    //cout<<mx;
    for(int i=0;i<m;i++){
        char s;
        cin>>s>>l>>r;
        
        if(mx>=l&&mx<=r){
            //cout<<s<<" "<<l<<" "<<r<<endl;
            if(s=='+')mx++;
            else mx--;
        }
        ans.push_back(mx);
        
    }
    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }
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