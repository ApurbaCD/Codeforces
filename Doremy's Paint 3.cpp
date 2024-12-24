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
    int n,f=-1,s=-1,t=-1,s1=0,s2=0,s3=0;
    bool b1=1,b2=1,b3=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]==a[n-1]){yes;return;}
    f=a[0];s=a[n-1];
    for(int i=0;i<n;i++){
        if(a[i]==f){
            s1++;
        }
        else if(a[i]==s){
            s2++;
        }
        else{
            no;return;
        }
    }
    if(n%2==0){
        if((n/2==s1)&&(n/2==s2)){
            yes;return;
        }
    }
    if(n%2==1){
        if(s1<s2){
           swap(s1,s2);
        }
        if((s1==(n/2)+1)&&(s2==(n/2))){
            yes;return;
        }
    }
    no;return;

}



int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}