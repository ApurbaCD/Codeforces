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
    int n,k,x;
    cin>>n>>k;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v,v+n);
    for(int i=0;i<n;i++){
        int tmp=v[i]+k;
        if(binary_search(v+i+1,v+n,tmp)){
           // cout<<binary_search(v+i+1,v+n,tmp)<<endl;
            yes;
            return ;
    }
    }
    no;

}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}