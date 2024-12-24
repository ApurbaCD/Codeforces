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


struct ary {
    int price;
    int quality;
};
bool srt(ary k1,ary k2){
    if(k1.price<k2.price)return 1;
    else if(k1.price==k2.price){
        if(k1.quality>k2.quality)return 1;
        else return 0;
    }
    else return 0;

}
void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,a,b;
    cin>>n;
    ary ar[n];
    bool b1=false;
    loop(i,0,(n-1)){
        cin>>a>>b;
        ar[i].price=a;
        ar[i].quality=b;
    }
    sort(ar,ar+n,srt);
    for(int i=0;i<(n-1);i++){
        if((ar[i].price<ar[i+1].price)&&(ar[i].quality>ar[i+1].quality)){
            b1=true;break;
        }
    }
    if(b1){
        cout<<"Happy Alex";
    }
    else{
        cout<<"Poor Alex";
    }

}
    // this is more easy .read the problem very clearly
    // int n;  cin>>n;
 
    // int x,y, quality , price ;
    // for(int i=0;i<n;i++){
    //     cin>>x>>y;
    //     if( x<y ){
    //         cout<< "Happy Alex" ;
    //         return;
    //     }
    // }
    // cout<< "Poor Alex" ;


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}