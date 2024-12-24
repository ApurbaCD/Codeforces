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


int a[2001],v[2001];
void clr(int n){
    loop(i,0,n-1){
        a[i]=0;
    }
}
int score(int n,int tmp){
    int s=0;
    loop(i,0,n-1){
        if(a[i]==i+1)s++;
        // if(i==v[tmp])break;
        //cout<<"k"<<a[i]<<" ";
    }
    //endline;
    return s;
}
void add(int j,int n){
    for(int i=0;i<n;i++){
        a[i]++;
        if(i==v[j]){return;}
    }
}
void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,k,d,x,sum=0;
    cin>>n>>k>>d;
    clr(n);
    loop(i,0,n-1){
        cin>>x;
        a[i]=x;
    }
    loop(i,0,k-1){
        cin>>x;
        v[i]=(x);
    }
    if(d>k){
        loop(i,k,d-1){
            v[i]=(v[i-k]);
        }
    }
    sort(v,v+d);
    // loop(i,0,d-1){cout<<v[i]<<" ";}
    loop(i,0,d-1){
        int sum1=score(n,i);
        //cout<<"L1 "<<sum1<<endl;
        sum1+=(d-i-1)/2;
        //cout<<"L2 "<<sum1<<endl;
        if(sum1>sum)sum=sum1;
        add(i,n);
    }
    // sum=score(n);
    // clr(n);
    //cout<<"L3 "<<sum<<endl;
   // sum+=(d-1)/2;
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