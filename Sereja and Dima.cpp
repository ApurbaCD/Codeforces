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
    int n,s=0,d=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=0;
    for(int i=0;i<n;i++){
        if(k&1){
            k++;
        if(a[i]<a[n-1]){
           d+=a[n-1];
           n--;
           i--; 
        }
        else{
            d+=a[i];
        }
        }
      else {
        k++;
        if(a[i]<a[n-1]){
           s+=a[n-1];
           n--;
           i--; 
        }
        else{
            s+=a[i];
        }
        }
    }
    cout<<s<<" "<<d;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}