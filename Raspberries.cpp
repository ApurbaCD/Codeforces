// #include<bits/stdc++.h>
// using namespace std;

// void ans(){
//   //freopen("input.txt","r",stdin);
//   //freopen("output.txt","w",stdout);
//   int n,k,x,mx=INT_MAX,mul=1,even=0;
//   cin>>n>>k;
//   for(int i=0;i<n;i++){
//     cin>>x;
//     if(!(x&1)){even++;}
//     if(x%k==0)mx=0;
//     mul= k-(x%k);
//     mx=min(mx,mul);
//   }
//   if(k==4){
//     if(even>=2){mx=0;}
//     else if(even==1){mx=min(1,mx);}
//     else mx=min(2,mx);
//   }
//   cout<<mx<<"\n";
// //   if(mx==INT_MAX)cout<<0<<"\n";
// //   else cout<<mx<<"\n";
// }

// int main(){
//   ios::sync_with_stdio(false);cin.tie(0);
//     int t;
//     cin>>t;
//     while(t--){
//         ans();
//     }
// }





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



void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,x,k,mx=INT_MAX,odd=0,even=0,mul=1;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
      cin>>x;
      mul*=x;
      int tmp=k-(x%k);
      if(x&1)odd++;
      if(x%2==0)even++;
      if(tmp==k)tmp=0;
      mx=min(mx,tmp);
    }
    if(k==4){
      if(mul%4==0){
        cout<<0<<endl;
        return;
      }
      if(mul%2==0)mx=min(mx,1);
      else mx=min(mx,2);
    }
    //cout<<"MX: "<<mul<<endl;
    cout<<mx<<endl;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}