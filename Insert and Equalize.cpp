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
    ll n,x,mx=LONG_LONG_MIN,gc,sum=0,mn=LONG_LONG_MAX,tmp=LONG_LONG_MAX;
    cin>>n;
    ll v[n];
    vec v1;
    loop(i,0,n-1){
        cin>>x;
        v[i]=(x);
        mx=max(mx,x);

    }
    if(n==1){
        cout<<1<<"\n";return;
    }
    loop(i,0,n-1){
        ll tmp1=abs(mx-v[i]);
        v1.push_back(tmp1);
    }
    gc=v1[0];
    loop(i,0,n-1){
        gc=gcd(v1[i],gc);
    }
    sort(v,v+n);
    for(ll i=mx-gc;i>=(-1e11);i=i-gc){
        if(!binary_search(v,v+n,i)){
           tmp=i;
           //cout<<"L"<<i<<endl;
           break;
        }
    }
    //cout<<tmp<<"K"<<endl;
    if(tmp!=LONG_MAX){
        v1.push_back(mx-tmp);n++;
    }
    if(tmp==LONG_MAX){
        sum=n;
    }
    loop(i,0,n-1){
        sum+=(v1[i]/gc);
    }

    cout<<sum<<"\n";
    //cout<<gc;

}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
        ans();
    }
}