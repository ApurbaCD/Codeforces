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
const ll siz=2e5+7,Inf=1e18+7;
ll n,m;
vector<ll>v[siz];
vector<ll>p;
vector<bool>b(siz,0);
void bfs(){
    priority_queue<ll,vector<ll>,greater<ll>>pr;
    pr.push(1);
    while(!pr.empty()){
        ll node=pr.top();
        pr.pop();
        if(b[node])continue;
        p.push_back(node);
        b[node]=1;
        for(auto x:v[node]){
            pr.push(x);
        }

    }
}
void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
   
   cin>>n>>m;
   ll a,b;
   for(int i=0;i<m;i++){
    cin>>a>>b;
    v[a].push_back(b);v[b].push_back(a);
   }
   bfs();
   for(int i=0;i<n;i++){
       cout<<p[i]<<" ";
   }

}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}