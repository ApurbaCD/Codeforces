// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 
// void ans(){
//     ll n,m1,m2,sum=0;
//     cin>>n;

//     vector<ll>v1,v2;
//     vector<ll>v[n];
//     for(ll i=0;i<n;i++){
//         cin>>m1;
//         for(ll j=0;j<m1;j++){
//             ll x;
//             cin>>x;
//             v[i].push_back(x);
            
//         }
//         sort(v[i].begin(),v[i].end());
//         v1.push_back(v[i][0]);
//         v2.push_back(v[i][1]);
//     }
//    if(n==1){
//     cout<<v1[0]<<" "<<endl;
//     return;
//    }
 

//     sort(v1.begin(),v1.end());
//     sort(v2.begin(),v2.end());
//     ll l1=v1.size(),l2=v2.size();    
//     for(ll i=l2-1;i>0;i--){
//         sum=sum+v2[i];
//     }
//     sum=sum+v1[0];
//     cout<<sum<<endl;
    
//     //cout<<"SES\n";
// }

// int main(){
//   ios::sync_with_stdio(false);cin.tie(0);
//     ll t;
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
    ll n,x;
    cin>>n;
    vector<ll>v1,v2,tmp;
    while(n--){
        ll n1;
        cin>>n1;
        for(int i=0;i<n1;i++){
            cin>>x;
            tmp.push_back(x);
        }
        sort(tmp.begin(),tmp.end());
        v1.push_back(tmp[0]);
        v2.push_back(tmp[1]);
        tmp.clear();
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    //cout<<v1.size()<<" "<<v2.size()<<endl;
    ll sum=v1[0];
    for(ll i=1;i<v2.size();i++){
        //cout<<"KL"<<endl;
        sum+=v2[i];
    }
    cout<<sum<<endl;

}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}