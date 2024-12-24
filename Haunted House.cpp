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
    int n,sum=0;
    cin>>n;
    vector<int>v,v1;
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    for(int i=1;i<(n+1);i++){
        if(s[i-1]=='0')v.push_back(i);
        else v1.push_back(i);
    }
    int k=0;
    if(v1[0]==1){
        sum=v[0]-v1[0];
    }
    for(int i=0;i<v.size();i++){
        if(v1[k]==i+1){
            sum+=v[i]-v1[i];
            k++;
        }
        cout<<sum<<" ";
    }
    for(int i=v.size()+1;i<=n;i++){
        cout<<-1<<" ";
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