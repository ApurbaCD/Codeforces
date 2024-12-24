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
    char a[3][3];
    int alpha[3]={0,0,0};
    int r=-1,c=-1;
    loop(i,0,2)
    loop(j,0,2){
        cin>>a[i][j];
        if(a[i][j]=='?'){r=i,c=j;}
    }
    loop(i,0,2){
        if(a[r][i]=='?')continue;
        else{
            int tmp=(a[r][i]);
            tmp=tmp-65;
            alpha[tmp]=1;
        }
    }
    loop(i,0,2){
        if(alpha[i])continue;
        else{
            int t=65+i;
            char c=t;
            cout<<c;endline;return;
        }
    }
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}