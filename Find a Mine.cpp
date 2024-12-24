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
    map<pair<int,int>,int>v;
    int n,m;
    int x,y,x1,y1,d,k,x2,y2,x3,y3,mn=INT_MIN;
    cin>>n>>m;
    int in=4;
    while(in--){
    cin>>x>>y;
    cin>>d;k=d;
    while(k>=0){
        x2=x+k;x1=x-k;
        y2=y+(d-k);y1=y-(d-k);
        if(v[{x1,y1}]>0)
            v[{x1,y1}]++;
        else v[{x1,y1}]=1;

        if(v[{x1,y2}]>0)
            v[{x1,y2}]++;
        else v[{x1,y2}]=1;

        if(v[{x2,y1}]>0)
            v[{x2,y1}]++;
        else v[{x2,y1}]=1;

        if(v[{x2,y2}]>0)
            v[{x2,y2}]++;
        else v[{x2,y2}]=1;
        
        k--;
    }
    }

    for(auto a:v){
        //cout<<a.first.first<<" "<< a.first.second<<" "<<a.second<<endl;
        if(a.second>mn){
            x3=a.first.first;
            y3=a.first.second;
            mn=a.second;
        }
    }
    cout<<x3<<" "<<y3;
    endline; 
    //cout<<" value  "<<x3<<"  "<<y3<<endl;

}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}