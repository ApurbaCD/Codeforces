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



void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,x,mn=INT_MAX,index;
    bool b1=true;
    cin>>n;
    vec v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
        if(mn>x){
            mn=x;index=i+1;
        }
    }
    for(int i=index;i<n;i++){
        if(v[i-1]>v[i]){b1=false;}
    }
    if(!b1){
        cout<<-1;
        endline;
        return;
    }
    cout<<index-1;
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