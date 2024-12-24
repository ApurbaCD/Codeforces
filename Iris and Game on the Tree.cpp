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
bool vis[siz+1];
vector<int>v[siz+1];
string s;
string   dfs(int i){
    vis[i]=true;
    char c =s[i-1];
    string s1="";
    s1+=c;
    for(int child : v[i]){
        if(vis[child])continue;
        dfs(child);
    }
    return s1 ;
}

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,a,b;
    cin>>n;

    
    memset(vis,0,sizeof(vis));
    for(int i=0;i<n-1;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    cin>>s;
    for(int i=1;i<=n;i++){
        cout<<i<<" : ";
        for( int child:v[i]){
            cout<<child<<" ";
        }
        endline;
    }
    for(int i=1;i<=n;i++){
        if(vis[i])continue;
        string s = dfs(i);
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