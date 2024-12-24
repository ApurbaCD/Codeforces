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
    double a,b;
    cin>>a>>b;
    a=b-a+1;
    double tmp1=1+(8*a);
    double tmp2=sqrt(tmp1);
    tmp2--;
    double tmp3=tmp2/2;
    //cout<<tmp3<<" "<<tmp2<<" "<<tmp1<<endl;
    ll tmp4 = (int) tmp3;
    if(tmp3>tmp4){
        cout<<tmp4+1;
        endline;
        return;
    }
    cout<<tmp4<<endl;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}