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

bool str (pair<int,int> a,pair<int,int> b){
    if(a.first<b.first)return 1;
    else if (a.first>b.first)return 0;
    else {
        if(a.second<=b.second)return 1;
        else return 0;
    }
}

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,a,b,s=0;
    int final[4];//0 +1, 0 -1, 1 0, -1 0
    loop(i,0,3){final[i]=0;}
    cin>>n;
    vector<pair<int,int>>v;
    loop(i,0,n-1){
        cin>>a>>b; 
        if(a>0)final[0]=1;
        else if (a<0) final[1]=1;
        if(b>0)final[2]=1;
        else if(b<0) final[3]=1;
    }
    loop(i,0,3){if(final[i])s++;}
    if(s==4)cout<<"NO\n";
    else cout<<"YES\n";

}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}