#include<bits/stdc++.h>
using namespace std;
#define ll                long long int
#define ull               unsigned long long int 
#define vec               vector<long long >
//copy from Mrinal da
#define vsort(v)          (v.begin(),v.end())
#define endline           cout<<"\n"
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define loop(i,a,b)       for(ll i=a;i<=b;i++)
#define loop1(i,a,b)      for(ll i=a;i>=b;i--)



void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,x,sum1=0,mx=LONG_MIN,mn=LONG_MAX,ans=-1,sum=0;
    cin>>n;
    vector<ll>v={0};
        for(ll i=0;i<n;i++){
        cin>>x;
        sum+=x;
        v.push_back(sum);
    }
    if(n==1){cout<<0<<"\n";return;}
    for(ll i=1;i<=(n/2);i++){
        if(n%i!=0)continue;
        //mx=LONG_MIN,mn=LONG_MAX; hoy na eta dile
        mx=-1e18,mn=1e18;
        for(ll j=i;j<=n;j+=i){
            sum1=v[j]-v[j-i];
            mx=max(mx,sum1);
            mn=min(mn,sum1);
        }
            //cout<<mx<<" jk"<<mn<<endl;
        ans=max(ans,mx-mn);

    }
    cout<<ans<<"\n";


}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    long long  t;
    cin>>t;
    while(t--){
        ans();
    }
}