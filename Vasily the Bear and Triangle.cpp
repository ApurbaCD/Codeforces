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
    int x,y,x1=0,x2=0,y1=0,y2=0;
    cin>>x>>y;
    if(x<0){
        x1=x-abs(y);
    }
    else{
        x1=x+abs(y);
    }
    if(y<0){
        y2=y-abs(x);
    }
    else{
        y2=y+abs(x);
    }
    if(x1<x2){
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
    return;
    }
    cout<<x2<<" "<<y2<<" "<<x1<<" "<<y1;   
 
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}