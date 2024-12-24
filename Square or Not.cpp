#include<bits/stdc++.h>
using namespace std;
#define ll                long long int 
#define ull               unsigned long long int 
//#define vec             vector<int>
//copy from Mrinal da
#define vec               vector<ll>
#define vsort(v)          (v.begin(),v.end())
#define endline           cout<<"\n"
#define yes               cout<<"Yes\n"
#define no                cout<<"No\n"
#define loop(i,a,b)       for(ll i=a;i<=b;i++)
#define loop1(i,a,b)      for(ll i=a;i>=b;i--)
const ll siz=2e5+7;
const ll INF=__LONG_LONG_MAX__;



void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int tmp=sqrt(n);
    if(tmp*tmp!=n){
        cout<<"No\n";
        return;
    }
    tmp--;
    for(int i=0;i<=tmp;i++){
        if(s[i]=='0'){no;return;}
    }
    for(int i=n-1-tmp;i<n;i++){
        if(s[i]=='0'){no;return;}
    }
    for(int i=tmp+1;i<n-tmp-1;i++){
        if(s[i]==s[i+tmp]){
            if(s[i]=='0'){
                cout<<"No\n";
                return;
            }
        }
        for(int j=i+1;j<i+tmp;j++){
            //cout<<"KL :"<<j<<endl;
                if(s[j]=='1'){
                cout<<"No\n";
                return;
            }
        }
        i+=tmp;
    }
    cout<<"Yes\n";
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}