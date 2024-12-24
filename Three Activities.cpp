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


// struct st
// {
//     int data,index,nmb;
// };
// bool str(st a,st b){
//     if(a.data<=b.data)return 1;
//     return 0;
// }
void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,x,mx=INT_MIN,sum=0;
    cin>>n;
    vector<pair<int,int>>v1,v2,v3;
    loop(i,0,n-1){
        cin>>x;
        v1.push_back({x,i});
    }
    loop(i,0,n-1){
        cin>>x;
        v2.push_back({x,i});
    }
    loop(i,0,n-1){
        cin>>x;
        v3.push_back({x,i});
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end());
    int m=0;
    for(int i=n-3;i<n;i++){
        for(int j=n-3;j<n;j++){
            if(v2[j].second==v1[i].second)continue;
            for(int k=n-3;k<n;k++){
                if((v3[k].second==v2[j].second)||(v3[k].second==v1[i].second))continue;
                sum=v1[i].first+v2[j].first+v3[k].first;
                if(sum>mx){
                    mx=sum;
                }
            }
        }
    }
    cout<<mx;
    endline;

}
int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}