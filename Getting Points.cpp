#include<bits/stdc++.h>
using namespace std;
#define ll                long long int  
#define ull               unsigned long long int 
//#define vec             vector<ll>
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
    ll n,p,l,t;
    cin>>n>>p>>l>>t;
    ll weekih=((n-1)/7)+1;
    ll dw=weekih/2;
    ll dwp=l+(2*t);
    ll dwn=p/dwp;
    if(dwn*dwp!=p){
        dwn++;
    }
    if(dwn<dw){
        cout<<n-dwn<<endl;return;
    }
    p=p-(dw*dwp);
    n=n-dw;
    //cout<<p<<" "<<n<<endl;
    if(dw*2!=weekih){
        n--;
        p=p-l-t;
    }
   // cout<<p<<"io "<<n<<endl;
    if(p<=0){
        cout<<n<<endl;return;
    }
    ll need=p/l;
    if(need*l!=p){
        need++;
    }
    //cout<<need<<endl;
    cout<<n-need;
    endline;
}


int  main(){
  ios::sync_with_stdio(false);cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
        ans();
    }
}