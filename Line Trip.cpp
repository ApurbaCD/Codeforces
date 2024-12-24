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
    int n,x,s,mx=-1;
    cin>>n>>x;
    vec v;
    v.push_back(0);
    loop(i,1,n){
        cin>>s;
        v.push_back(s);
    }
    x=v[n]+(x-v[n])*2;
    v.push_back(x);
    loop(i,1,n+1){
        //cout<<"K"<<v[i]<<endl;
        if(mx<v[i]-v[i-1]){
            //cout<<v[i]<<" "<<v[i-1]<<endl;
           mx=v[i]-v[i-1];
        }
    }
    cout<<mx<<endl;

}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}