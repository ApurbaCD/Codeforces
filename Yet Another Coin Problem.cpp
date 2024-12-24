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

vec value(1000,INF); 
vec coin={1,3,6,10,15};
void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    value[0]=0;
    loop(j,0,4)
        loop(i,1,100){
            if(i-coin[j]>=0)
            value[i]=min(value[i-coin[j]]+1,value[i]);
        }

}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    ans();
    while(t--){
        ll n,sum=0;
        cin>>n;
        if(n<=30){
            cout<<value[n];
            endline;
        }
        else{
            sum=(n/15)-1;
            n=n-(sum*15);
            //cout<<n<<" ";
            cout<<sum+value[n];
            endline;
        }
    }
}