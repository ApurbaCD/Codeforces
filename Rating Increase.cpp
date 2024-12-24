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



void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a=1,b=1;
    string s;
    cin>>s;
    a =(int)s[0]-48;
    for(int i=1;i<s.size();i++){
        int tmp=(int)s[i]-48;
        if(tmp==0){
            a=a*10+tmp;
        }
        else{
            b =tmp;
            for(int j=i+1;j<s.size();j++){
                int tmp1 = (int) s[j]-48;
                 b=b*10+tmp1;
            }
            break;
            }
        //cout<<tmp<<" ";
    }
    //cout<<a<<" "<<b;
    if(a>=b){cout<<-1;endline;
    return;
    }
    cout<<a<<" "<<b;
    endline;
    return;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}