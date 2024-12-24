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
    int n,sum=0;
    cin>>n;
    int a[27];
    loop(i,0,26){a[i]=0;}
    string s;
    cin>>s;
    loop(i,0,n-1){
        int tmp= s[i]-64;
       // cout<<tmp<<" k ";
        a[tmp]++;
    }   
    loop(i,1,26){
        if(i<=a[i])sum++;
        //cout<<a[i]<<" "<<i<<endl;;
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