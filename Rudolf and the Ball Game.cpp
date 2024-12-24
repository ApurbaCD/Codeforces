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


int arr[1001];
void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    loop(i,0,1000){
        arr[i]=0;
    }
    ll n,m,x,value;
    char di;
    cin>>n>>m>>x;
    set<int>q;
    q.insert(x);
    loop(i,0,m-1){
        set<int>now;
        cin>>value>>di;
        int l=q.size();
        for(auto cu:q){
            if(di=='?'){
                ll current = cu;
                ll v1=current+value;
                ll v2=current-value;
                if(v1>n)v1=v1-n;
                if(v2<=0)v2=n+v2;
                now.insert(v1);
                now.insert(v2);
            }
            else if (di=='1'){
                ll current = cu;
                ll v2=current-value;
                if(v2<=0)v2=n+v2;
                now.insert(v2);   
            }
            else{
                ll current = cu;
                ll v1=current+value;
                if(v1>n)v1=v1-n;
                now.insert(v1);
            }
        }
        q.clear();
        for(auto c:now){
            q.insert(c);
        }
    }
    cout<<q.size()<<"\n";
    for(auto c: q){
        cout<<c<<" ";
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