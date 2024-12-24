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
    int r,c,sum=0;
    cin>>r>>c;
    char a[r+1][c+1],b[r+1][c+1];
    loop(i,1,r){
        loop(j,1,c){
            cin>>a[i][j];
            b[i][j]=0;
        }
    }
    loop(i,1,r){
        bool b1=true;
        loop(j,1,c){
            if(a[i][j]=='S'){
                b1=false;
            }
        }
        if(b1){
          loop(j,1,c){
            b[i][j]=1;
            //cout<<"f"<<i<<j<<endl;
          }  
        }
    }
    loop(i,1,c){
        bool b1=true;
        loop(j,1,r){
            if(a[j][i]=='S'){
                b1=false;
            }
        }
        if(b1){
          loop(j,1,r){
            b[j][i]=1;
            //cout<<"L"<<i<<j<<endl;

          }  
        }
    }
     loop(i,1,r){
        loop(j,1,c){
            if(b[i][j])sum++;
        }
    }
    cout<<sum;


}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}