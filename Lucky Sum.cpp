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
vector<ll>v={4,7};
void  check(){
    int l=0,r=1;
    for(int i=0;i<7;i++){
    for(int j=l;j<=r;j++){
        ll tmp=v[j]*10+4;
        ll tmp1=v[j]*10+7;
        v.push_back(tmp);
        v.push_back(tmp1);
        if(tmp==444444444)return;
    }
    int tmp=l;
    l=r+1;
    r+=r+(2*tmp);
    }

}

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int l,r,tmp=4,sum=0;
    cin>>l>>r;
    check();

    for(int i=l;i<=r;i++){
        
    }
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}