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
    int n,ta=0,tb=0,a=0,b=0;
    cin>>n;
    string s;
    cin>>s;
    bool b1=true;
    int s1=0,s2=0;
    for(int k=1;k<=n;k++){
        ta=0;tb=0;b1=true;
    for(int i=1;i<=n;i++){
        s1=0;s2=0;
    for(int j=0;j<n;j++){
        if(s[j]=='A'){
           s1++;
        }
        if(s[j]=='B'){
             s2++;
        }
        if(s1==i){
            ta++;
            if(ta==k){
                b1=false;
                a++;break;}
        }
        if(s2==i){
            tb++;
            if(tb==k){
                b++;
                b1=false;
                break;}
        }
              //cout<<ta<<" "<<tb<<" "<<i<<endl;;
    }
    if(!b1)break;
    }
    }

    cout<<a<<" "<<b<<endl;;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}