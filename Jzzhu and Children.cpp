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



void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,m,mx=-1,j=0,x;
    vec v;
    cin>>n>>m;
    loop(i,0,n-1){
        cin>>x;
        if(x<=m){
            v.push_back(1);
        }
        else if(x%m==0){
            v.push_back(x/m);
        }
        else{
            v.push_back((x/m)+1);
        }
        if(mx<=v[i]){
           mx=v[i];
           j=i+1;
        }
    }
    cout<<j;
    
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}