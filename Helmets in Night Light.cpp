// #include<bits/stdc++.h>
// using namespace std;
// void ans(){
//     long long  n,p,x,sum=0,j=0,tmp=1,s=0;
//     cin>>n>>p;
//     vector<long long >v;
//     sum=p;
//     vector<pair<long long ,long long >>v1;
//     for(long long  i=0;i<n;i++){
//         cin>>x;
//         v.push_back(x);
//     }
//     for(long long  i=0;i<n;i++){
//         cin>>x;
//         v1.push_back(make_pair(x,v[i]));
//     }
//     sort(v1.begin(),v1.end());
//     if(v1[0].first>=p){
//             sum=(n*p);
//             cout<<sum<<"\n";
//             return;
//          }
//          //s=p;
//         //  for(long long  i=0;i<n+1;i++){
//         //     cout<<v1[i].first<<" ";
//         //     s+=v1[i].first;
//         //  }
//         //  cout<<s+p<<endl;
//         //  cout<<endl;
//     while(1){
//          if(v1[j].first>=p){
//                 sum+=(n-tmp)*p;
//                 //cout<<(n-tmp)<<tmp<<n<<endl;
//                //cout<<"K";
//                 cout<<sum<<"\n";
//                 return;
//          }
//          else{
//             if(tmp+v1[j].second<n){
//             sum=sum+((v1[j].second)*(v1[j].first));
//             tmp+=v1[j].second;
//             j++;
//             }
//             else{
//                 sum=sum+((n-tmp)*(v1[j].first));
//                 break;
//             }
//          }

//     }
//     cout<<sum<<"\n";
// }

// int main(){
//   ios::sync_with_stdio(false);cin.tie(0);
//     long long  t;
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
    ll n,p,x,ans=0,n1;
    cin>>n>>p;
    n1=n;
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++){
        cin>>x;
        v[i].second=x;
    }
    for(int i=0;i<n;i++){
        cin>>x;
        v[i].first=x;
    }
    sort(v.begin(),v.end());
    if(v[0].first>=p){
        cout<<(n*p)<<endl;
        return;
    }
    n1--;
    ans=p;
    for(int i=0;i<n;i++){
        ll tmp=v[i].first;
        ll tmp1=v[i].second;
        if(p>tmp){
            if(n1-tmp1<0){
               ans+=n1*tmp;
               break;
            }
            else{
                ans+=tmp1*tmp;
                n1=n1-tmp1;
            }
        }
        else{
            ans+=(p*n1);
            break;
        }
    }
    cout<<ans<<endl;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}