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
    ll n,x,n1,sum=0;
    cin>>n;
    n1=(2*n)-1;
    vec v1;
    for(ll i=0;i<(2*n);i++){
        cin>>x;
        v1.push_back(x);
        //cout<<x<<" ";
    }
    sort(v1.begin(),v1.end());
    //cout<<v1[5]<<"KL";
    for(ll i=0;i<(n-1);i++){
        sum+=abs(v1[i]-v1[i+1]);
        //cout<<v1[n1-i]<<" "<<v1[i]<<"\n";
    }
    for(ll i=n;i<n1;i++){
         sum+=abs(v1[i]-v1[i+1]);
    }
     cout<<sum<<"\n";
    for(ll i=0;i<n;i++){
        //sum+=(abs((v1[n1-i])-(v1[i])));
        cout<<v1[n1-i]<<" "<<v1[i]<<"\n";
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