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
    ll n,x,mx=-1;
    vector<ll>v1,v2;
    unordered_map<ll,ll>mp1,mp2;
    unordered_map<int,int>:: iterator it;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<n;i++){
        cin>>x;
        v2.push_back(x);
    }
    ll l=1;
    for(int i=0;i<n-1;i++){
        if(v1[i]==v1[i+1]){
            l++;
        }
        else{
            mp1[v1[i]]=max(l,mp1[v1[i]]);
            l=1;
        }
    }
    mp1[v1[n-1]]=max(l,mp1[v1[n-1]]);
    l=1;
    for(int i=0;i<n-1;i++){
        if(v2[i]==v2[i+1]){
            l++;
        }
        else{
            mp2[v2[i]]=max(l,mp2[v2[i]]);
            l=1;
        }
    }
    mp2[v2[n-1]]=max(l,mp2[v2[n-1]]);
    for(auto i:mp2){
        mx=max(mx,i.second);
    }
    for(auto i:mp1){
        int tmp=i.second;
        int tmp1=i.first;
        mx=max(mx,tmp+mp2[tmp1]);
    }
    cout<<mx<<endl;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}