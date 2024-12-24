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


vector<int>v;
int dp[1000][1000];
string s;
int rec(int i,int p){
    if(dp[i][p]!=-1)return dp[i][p];
    if((v[i]-1)==p){
        if(s[i]=='0')return 1;
        //cout<<v[i]-1<<" "<<p<<endl;
        return 0;
    }
    if(s[i]=='0'){
        //cout<<"KL";
        return dp[i][p]=1+rec(v[i]-1,p);
    }
    return dp[i][p]=rec(v[i]-1,p);

}
void ans(){
    int x,n;
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>s;
    for(int i=0;i<n;i++){
        cout<<rec(i,i)<<" ";
        //cout<<v[i]<<" ";
    }
    s.clear();
    v.clear();
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