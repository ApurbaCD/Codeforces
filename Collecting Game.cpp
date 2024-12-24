#include<bits/stdc++.h>
using namespace std;
#define ll                long long int 
#define ull               unsigned long long int 
//#define vec             vector<int>
//copy from Mrinal da
#define vec               vector<ll>
#define vecpair           vector<pair<ll,ll>>
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
    ll n,x;
    bool b1=0;
    cin>>n;
    vec presum;
    ll finl[n+1];
    vector<pair<ll,ll>>v;
    loop(i,0,n-1){
        cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    presum.push_back(v[0].first);
    loop(i,1,n-1){
        presum.push_back(presum[i-1]+v[i].first);
    }
    loop(i,0,n-1){
        ll tmp = presum[i];
        ll index=i;
        ll j=i+1;
        while((tmp>=v[j].first)&&(j<n)&&(!b1)){
            tmp+=v[j].first;
            //cout<<tmp<<" k "<<i<<" "<<index<<endl;
            j++;
            index++;
        }
        if(index==n-1){
            b1=1;
        }
        if(b1){
            index=n-1;
        }
        //cout<<"L "<<v[i].second<<" "<<index<<endl;
        finl[v[i].second]=index;
    }
    loop(i,0,n-1){
        cout<<finl[i]<<" ";
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