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
    int n,sum=0;
    bool b1=0,b2=0,b3=0,b4=0,b5=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n-2;i++){
        if(s[i]=='m'){
            if(s[i+1]=='a'){
                if(s[i+2]=='p'){
                    sum++;
                    if(i+3<n&&s[i+3]=='i'){
                        if(i+4<n&&s[i+4]=='e'){
                            i=i+3;
                        } 
                    }
                }
            }
        }
        if(s[i]=='p'){
            if(s[i+1]=='i'){
                if(s[i+2]=='e'){
                    sum++;
                }
            }
        }
    }
    cout<<sum;
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