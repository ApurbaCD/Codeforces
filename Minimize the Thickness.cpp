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
    int n,tmp=0,sum1=0,index=0,mx=-1,mx1=INT_MAX;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        tmp+=v[i];
        index=i;
        mx=-1;
        sum1=0;
        for(int j=i+1;j<n;j++){
            sum1+=v[j];
            if(sum1<tmp)continue;
            else if(sum1>tmp){
                break;
            }
            else{
                sum1=0;
                int t=j-index;
                if(mx<t){mx=t;}
                index=j;
                //cout<<tmp<<" "<<t<<" "<<mx<<endl;

            }
        }
        if(index==(n-1)&&(mx!=-1)){
            if(mx1>mx){
                mx1=mx;
            }
        }
    }
    if(mx1==INT_MAX){
        cout<<n<<"\n";
        return;
    }
    cout<<mx1<<"\n";
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}