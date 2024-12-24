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
char a[510][510];
bool b[510][510];

bool dfs(int i,int j){
    b[i][j]=1;
    if((a[i+1][j]=='S')||(a[i][j+1]=='S')||(a[i-1][j]=='S')||(a[i][j-1]=='S')){
        return 0;
    }
    if(a[i+1][j]=='.'){
       a[i+1][j]='D';
    }
    if(a[i][j+1]=='.'){
       a[i][j+1]='D';
    }
    if(a[i-1][j]=='.'){
       a[i-1][j]='D';
    }
    if(a[i][j-1]=='.'){
        a[i][j-1]='D';
    }
    return 1;
}

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int r,c;
    bool b1=true;
    cin>>r>>c;
    a[r][c];
    b[r][c];
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(a[i][j]=='W'){
                if(!b[i][j]){
                    b1=dfs(i,j);
                    //cout<<b1<<" ";
                    if(!b1){
                        cout<<"NO";return;
                    }
                }
            }
        }
    }
    yes;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<a[i][j];
        }
        endline;
    }

}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}