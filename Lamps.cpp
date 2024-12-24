#include<bits/stdc++.h>
using namespace std;
#define ll                long long int 
#define ull               unsigned long long ll 
//#define vec             vector<ll>
//copy from Mrinal da
#define vec               vector<ll>
#define vsort(v)          (v.begin(),v.end())
#define endline           cout<<"\n"
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define loop(i,a,b)       for(ll i=a;i<=b;i++)
#define loop1(i,a,b)      for(ll i=a;i>=b;i--)

struct arr{
    ll a,b;
};
bool srt(arr aa, arr bb){
    if(aa.a<bb.a)return 1;
    if(aa.a==bb.a){
        if(aa.b>bb.b)return 1;
        else return 0;
    }
    return 0;
}
void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,ai,bi,sum=0;
    bool b1=false;
    cin>>n;
    arr ar[n];
    for(ll i=0;i<n;i++){
        cin>>ai>>bi;
        ar[i].a=ai;
        ar[i].b=bi;
    }
    sort(ar,ar+n,srt);
    ll tmp=1,count=1,tmp1=ar[0].a;
    for(ll i=0;i<n;i++){
        //cout<<ar[i].a<<" h "<<ar[i].b<<endl;
        tmp=ar[i].a;
        for(ll j=0;j<tmp&&(ar[i].a==tmp);j++){
            sum+=ar[i].b;
            //cout<<sum<<ar[i].b<<"S"<<endl;
            i++;
            //cout<<tmp<<ar[i].a<<j<<"KL"<<endl;
        }
        while(ar[i].a==tmp){
            i++;
        }
        i--;

    }
    cout<<sum<<"\n";

}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ans();
    }
}