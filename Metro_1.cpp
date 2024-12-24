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
    int n,s;
    cin>>n>>s;
    int a[n],b[n];
    loop(i,0,n-1)cin>>a[i];
    loop(i,0,n-1)cin>>b[i];
    if((a[0]==0)||((a[s-1]==0)&&(b[s-1]==0))){
        no;return;
    }
    if(a[s-1]==1){
       yes;return;
    }
    for(int i=s-1;i<n;i++){
        if((a[i]==1)&&(b[i]==1)){
            yes;return;
        }
    }
    no;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}