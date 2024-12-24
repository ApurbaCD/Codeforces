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
    int s1=-1,s0=-1,a1=-1,a0=-1;
    string s,t;
    int n,m;
    cin>>n>>m;
    cin>>s>>t;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
           if(s[i]=='1'){
                s1=1;
           }
           if(s[i]=='0'){
               s0=1;
           }
        }
    }
    if(s1==1&&s0==1){no;return;}
    if(s1==-1&&s0==-1){yes;return;}
        for(int i=0;i<m-1;i++){
        if(t[i]==t[i+1]){
           if(t[i]=='1'){
                a1=1;
           }
           if(t[i]=='0'){
               a0=1;
           }
        }
    }
    if((a1==1)||(a0==1)){
        no;return;
    }
    if(t[0]!=t[m-1]){no;return;}
    if(s1==1){
        if(t[0]=='0'){yes;return;}
        no;return;
    }
    if(s0==1){
         if(t[0]=='1'){yes;return;}
        no;return;
    }
    
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}