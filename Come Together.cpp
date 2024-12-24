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
    int x1,x2,x3,y1,y2,y3,s;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int ab = abs(x1-x2)+abs(y1-y2)+1;
    int ac = abs(x1-x3)+abs(y1-y3)+1;
    int bc = abs(x2-x3)+abs(y2-y3)+1;
    s=ab+ac-1;
    if(s==bc){
        cout<<1<<endl;
        return;
    }
    s=ab+ac-bc;
    s=(s-1)/2+1;
    cout<<s<<endl;

}



int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}