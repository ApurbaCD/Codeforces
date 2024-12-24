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



ll check(string s){
    ll tmp=10,ans=0;
    for(ll i=0;i<s.size();i++){
      ll t=(int)(s[i]-48);
      ans*=tmp;
      ans+=t;
    }
    return ans;
}


void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,cnt=0,i1,i2,i3,i4,i5,val,mx=0;
    string s,s1;
    bool b1=0;
    cin>>s;
    s1=s;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='?'){
          if(cnt==0)i1=i;
          if(cnt==1)i2=i;
          if(cnt==2)i3=i;
          if(cnt==3)i4=i;
          if(cnt==4)i5=i;
          cnt++;
        }

    }
    if(cnt==0){
      cout<<check(s1)<<endl;
      return;
    }
    ll i8=0;
    if(i1==0)i8=1;
    // for(int i=0;i<i1;i++){
    //   if(s[i]>'0'){
    //     b1=1;
    //   }
    // }
    // if(b1){
    //   i8=0;
    // }
    // if(!b1){
    //   i8=1;
    // }
    if(cnt==1){
      for(ll i=i8;i<10;i++){
        s1[i1]=(char)(i+48);
        int tmp2=check(s1);
          int ans=__builtin_popcount(tmp2);
          if(ans>=mx){
              mx=ans;
              val=tmp2;
          }
      }
    }
    if(cnt==2){
      for(ll i=i8;i<10;i++){
        s1[i1]=(char)(i+48);
        for(ll j=0;j<10;j++){
          char c=(char)(j+48);
          //cout<<c<<endl;
          s1[i2]=c;
          // cout<<"KL "<<s1[i2]<<endl;
           //cout<<s1<<endl;
          ll tmp2=check(s1);
          ll ans=__builtin_popcount(tmp2);
          if(ans>=mx){
              mx=ans;
              val=tmp2;
          }
        }
      }
    }
    if(cnt==3){
        for(int i=i8;i<10;i++){
          s1[i1]=(char)(i+48);
          for(int j=0;j<10;j++){
            s1[i2]=(char)(j+48);
            for(int k=0;k<10;k++){
              s1[i3]=(char)(k+48);
              ll tmp2=check(s1);
              ll ans=__builtin_popcount(tmp2);
              if(ans>=mx){
                mx=ans;
                val=tmp2;
              }
            }
          }
        }
    }
    if(cnt==4){
        for(int i=i8;i<10;i++){
          s1[i1]=(char)(i+48);
          for(int j=0;j<10;j++){
            s1[i2]=(char)(j+48);
            for(int k=0;k<10;k++){
              s1[i3]=(char)(k+48);
              for(int l=0;l<10;l++){
                s1[i4]=(char)(l+48);
                ll tmp2=check(s1);
                ll ans=__builtin_popcount(tmp2);
                if(ans>=mx){
                  mx=ans;
                  val=tmp2;
                }
              }
            }
          }
        }
    }
    if(cnt==5){
        for(int i=i8;i<10;i++){
          s1[i1]=(char)(i+48);
          for(int j=0;j<10;j++){
            s1[i2]=(char)(j+48);
            for(int k=0;k<10;k++){
              s1[i3]=(char)(k+48);
              for(int l=0;l<10;l++){
                s1[i4]=(char)(l+48);
                for(int m=0;m<10;m++){
                  s1[i5]=(char)(m+48);
                ll tmp2=check(s1);
                cout<<tmp2<<endl;
                ll ans=__builtin_popcount(tmp2);
                if(ans>=mx){
                  mx=ans;
                  val=tmp2;
                }
                }
              }
            }
          }
        }
    }
    //cout<<__builtin_popcount(98303)<<endl;
    cout<<val<<endl;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}