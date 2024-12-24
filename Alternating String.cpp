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

int n;

int rec(int i,string s){
    if(i+2>=n)return 0;
    int take =siz,skip=siz;
    if(s[i]!=s[i+2]){
        int t=siz,sk;
        if(s.size()%2==1){
            string s1=s,s2=s,s3=s;
            s1.erase(i,1);
            s2.erase(i+1,1);
            s3.erase(i+2,1);
            int r1,r2,r3;
            r1=1+rec(i,s1);
            r2=1+rec(i,s2);
            r3=1+rec(i,s3);
            t= min({r1,r2,r3});
        }
        sk=1+rec(i+1,s);
        //cout<<sk<<" "<<t<<" "<<i<<endl;
        return min(sk,t);
    }
    else{
        return rec(i+1,s);
    }
}

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s;
    cin>>n;
    cin>>s;
    cout<<rec(0,s)<<endl;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}