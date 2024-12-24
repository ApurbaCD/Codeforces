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

int a[27];
void clear(){
    for(int i=0;i<27;i++){
        a[i]=0;
    }
}

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;string s;
    int sum=0,mx=-1,sum1=0;
    cin>>n;
    if(n%2==1)sum=1;
    cin>>s;
    clear();
    loop(i,0,n-1){
        int tmp=s[i]-97;
        a[tmp]++;
        //cout<<tmp<<endl;
    }
    sort(a,a+27,greater<int>());
    mx=a[0];
    loop(i,1,26){
         sum1+=a[i];
        //cout<<sum1<<" "<<a[i]<<endl;
    }
    if(mx>sum1){
        sum=mx-sum1;
    }
    cout<<sum<<"\n";

    
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}