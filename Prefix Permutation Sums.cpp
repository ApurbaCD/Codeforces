#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vl vector<ll>
#define mp map<ll,ll>
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
void ans(){
    vl v;
    ll sum=0,c=0,n,l=-1,x,k=-1;
    cin>>n;
    mp m;
    for(int i=0;i<n-1;i++){
    cin>>x;
    v.push_back(x);
    }
    m[v[0]]++;
    for(int i=1;i<n-1;i++){
    m[v[i]-v[i-1]]++;
    }
    for(int i=1;i<=n;i++){
        if(!m[i]){
            sum+=i;
            c++;
        }
    }
      if(c == 1) {
        py
        return;
        }
      if(c==2&&(m[sum]==2||(m[sum]==1&&sum>n))){
        py
        return;
        }
      else pn

}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ans();
    }
    
}