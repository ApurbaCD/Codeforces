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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    s1=s1+s2;
    sort(s1.begin(),s1.end());
    // sort(s2.begin(),s2.end());
    sort(s3.begin(),s3.end());
    //cout<<s1<<endl<<s3;
    if(s1==s3){
        cout<<"YES";return;
    }
    cout<<"NO";

}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}