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
    int a,b,xk,yk,xq,yq,sum,sum1=0,sum2=0;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    // if(xk+yk>xq+yq){
    //     swap(xk,xq);
    //     swap(yk,yq);
    // }
    int tmp1,tmp2,tmp11,tmp22;
    vector<pair<int,int>>v={{-a,-b},{a,b},{-b,-a},{b,a},{-a,b},{b,-a},{a,-b},{-b,a}};
    vector<pair<int,int>>f;
    for(int i=0;i<8;i++){
        pair<int,int>x=v[i];
        for(int j=0;j<8;j++){
            if(i==j){continue;}
             pair<int,int>y=v[j];
            if((xk+x.first==xq+y.first)&&(yk+x.second==yq+y.second)){
                // cout<<i<<" "<<j<<endl;
                // cout<<xk+x.first<<" h "<<yk+y.first<<endl;
                // cout<<x.first<<" l "<<x.second<<endl;
                // cout<<y.first<<" k "<<y.second<<endl;
                bool b1=1;
                for(auto x1 : f){
                    if((x1.first==xk+x.first)&&(x1.second==yk+x.second)){
                        b1=0;
                    }
                }
                if(b1){
                    sum1++;
                    f.push_back({xk+x.first,yk+x.second});
                }
                //break;
            }
        }
    }

    cout<<sum1+sum2;

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