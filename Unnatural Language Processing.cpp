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
    int n,index=-1;
    cin>>n;
    string s,f;
    cin>>s;
    // f=s[0];
    // f+=s[1];
    loop(i,0,n-1){
        index=i;
        if(i+3>=n)break;
        char c1=s[i+3];
        if((c1=='a')||(c1=='e')){
            f+=s[i];
            f+=s[i+1];
            f+='.';i++;
        }
        else{
            f+=s[i];
            f+=s[i+1];
            f+=s[i+2];
            f+='.';
            i=i+2;
        }

    }
    for(int i=index;i<n;i++){
        f+=s[i];
    }
    for(int i=0;i<f.length();i++){
        cout<<f[i];
    }
    endline;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}