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

int check(int tmp){
    int sum=0;
    while(tmp>0){
       sum=sum+(tmp%10);
       tmp/=10;
    }
    //cout<<sum<<endl;
    return sum;
}

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int x,k;
    cin>>x>>k;
    for(int i=0;i<101;i++){
        int tmp=x+i;
        int tt=check(tmp);
        if(tt%k==0){
            cout<<tmp<<"\n";
            return;
        }
    }
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}