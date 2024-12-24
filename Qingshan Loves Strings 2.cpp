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
    int n;
    bool b1=1,b2=1;
    cin>>n;
    string s;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s[i]==s[n-1-i]){
            b1=0;
            if(s[i]=='1'){
               b2=0; 
            }
            }
    }
    if(b1){
        cout<<0<<endl;return;
    }
    if((n%2==1)||(!b2)){cout<<-1<<endl;return;}
    for(int i=0;i<s.size();i++){
        if(s[i]==s[n-1-i]){
             string a,b;
             
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