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
    ll n,x;
    cin>>n;
    vec v1;
    loop(i,0,n-1){
        cin>>x;
        v1.push_back(x);
    }
    loop(i,0,n-3){
        if((v1[i]*2<=v1[i+1])&&(v1[i+2]-v1[i]>=0)){
            v1[i+1]=v1[i+1]-(v1[i]*2);
            v1[i+2]=v1[i+2]-v1[i];
            v1[i]=0;
        }
        else{
            no;return;
        }
    }
    loop(i,0,n-1){
        if(v1[i]){no;return;}
    }
    // if(v1[n-1]){no;return;}
    yes;

}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}