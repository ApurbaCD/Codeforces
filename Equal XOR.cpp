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


bool comp(){


}

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,k,n1,x,k1;
    cin>>n>>k;
    n1=2*k;
    k=n1;
    int a1[n+1],a2[n+1];
    vector<int>v1,v2,v3,v4;
    vector<int>arr1,arr2;
    loop(i,0,n){
        a1[i]=0;a2[i]=0;
    }
    loop(i,1,n){
        cin>>x;
        a1[x]++;
    }
    loop(i,1,n){
        cin>>x;
        a2[x]++;
        if(a1[i]==1)v1.push_back(i);
        if(a1[i]==2)v2.push_back(i);
    }
    loop(i,1,n){
        if(a2[i]==1)v3.push_back(i);
        if(a2[i]==2)v4.push_back(i);
    }
    sort(v1.begin(),v1.end());
    sort(v3.begin(),v3.end());
    loop(i,1,n1){
        int l1,l2,l3,l4;
        l1=v1.size();
        l2=v2.size();
        l3=v3.size();
        l4=v4.size();
        if(k>1&&l2!=0){
            int a=v2[l2-1],b=v4[l4-1];
            arr1.push_back(a);arr1.push_back(a);
            arr2.push_back(b);arr2.push_back(b);
            v2.pop_back();
            v4.pop_back();
            k-=2;
        }
        else if(k>0&&l2==0){
            arr1.push_back(v1[l1-1]);
            arr2.push_back(v3[l3-1]);
            v1.pop_back();
            v3.pop_back();
            k--;
            //cout<<k<<v1[l1-1]<<"M";
            //endline;
        }

    }
    loop(i,0,n1-1){
        cout<<arr1[i]<<" ";
    }
    endline;
    loop(i,0,n1-1){
        cout<<arr2[i]<<" ";
    }
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