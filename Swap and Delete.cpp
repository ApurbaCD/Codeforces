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
    int s1=0,s0=0,sum=0,s=0;
    bool b1=1,b2=1;
    string a;
    cin>>a;
    int l=a.size();
    loop(i,0,l-1){
        if(a[i]=='1')s1++;
        if(a[i]=='0')s0++;
        //cout<<a[i]<<endl;
    }
    //cout<<s1<<" "<<s0<<a<<endl;
    if(s1==s0){cout<<0;endline;return;}
    if((s1==l)||(s0==l)){cout<<l;endline;return;}
    for(int i=0;i<l;i++){
        if(a[i]=='0'){
            s1--;
        }
        if(a[i]=='1'){
            s0--;
        }
        if((s1<0)||(s0<0)){
            b1=0;break;
        }
    }
    cout<<s0+s1+1;endline;

}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}