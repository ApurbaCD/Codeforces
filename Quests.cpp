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
    int x,sum1=0,sum2=0,mx1=INT_MIN,mx2=INT_MIN,mn1=INT_MAX,mn2=INT_MAX;
    int n,k;
    vec v1,vmax;
    cin>>n>>k;
    v1.push_back(0);
    loop(i,1,n){
        cin>>x;
        v1.push_back(x+(v1[i-1]));
    }
    vmax.push_back(0);
    loop(i,0,n-1){
        cin>>x;
        mx1=max(mx1,x);
        vmax.push_back(mx1);
    }
    if(k<n){
        n=k;
    }
    loop(i,1,n){
        sum1=v1[i]+((k-i)*vmax[i]);
        if(mx2<sum1){
            mx2=sum1;
        }
        //cout<<v1[i]<<" ";
    }
    cout<<mx2;endline;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}