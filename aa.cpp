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
    string s;
    ll n;
    cin>>n;
      vector<ll>arr(n);
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
    cin>>s;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
      int x1=i+1,x2=i,ans=0;
      if(mp[i+1]!=0){
        cout<<mp[i+1]<<" ";
        continue;
      }
      if(s[i]=='0'){
        //cout<<i<<" a "<<ans<<endl;
        ans++;
      }
      vector<ll>tmp;
      tmp.push_back(i+1);
      while(x1!=arr[x2]){
        x2=arr[x2]-1;
        if(s[x2]=='0')ans++;
        tmp.push_back(arr[x2]);
      }
      for(auto x:tmp){
        mp[x]=ans;
      }
      cout<<ans<<" ";

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