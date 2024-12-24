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
    int a[5][5] = {0};
 
 
    for(int i = 1 ;i<4 ; i++){
        for(int j= 1 ; j<4 ; j++){
           cin>> a[i][j];
        }
    }
 
    for(int i = 1 ;i<4 ; i++){
        for(int j= 1 ; j<4 ; j++){
            int tmp = a[i][j] + a[i-1][j] + a[i][j-1] + a[i+1][j] + a[i][j+1] ;
            if(tmp & 1){
                cout<<0;
            }
            else{
                cout<<1;
           }
        }   cout<<endl;
    }   cout<<endl;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}