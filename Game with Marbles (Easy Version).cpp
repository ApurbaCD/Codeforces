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
    ll n,x,sum=0;
    cin>>n;
    vec v1,v2;
    vector<pair<int,int>>v;
    loop(i,0,n-1){
        cin>>x;
        v1.push_back(x);
    }
    loop(i,0,n-1){
        cin>>x;
        v2.push_back(x);
        v.push_back({x+v1[i],i});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(i%2==0){
            int tmp = v[n-i-1].second;
            sum+=v1[tmp]-1;
        }
        else{
            int tmp = v[n-i-1].second;
            sum-=v2[tmp]-1;
        }
       // cout<<sum;
       // endline;
    }
    cout<<sum;
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