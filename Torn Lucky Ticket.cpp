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

bool check(string s){
    bool b1=false,b2=false;
    int sum1=0,sum2=0;
    if(s.length()%2==0){
        b1=true;
    }
    else{return 0;}
    for(int i=0;i<(s.length()/2);i++){
        sum1+=(int)(s[i]-48);
    }
    for(int i=(s.length()/2);i<s.length();i++){
        sum2+=(int)(s[i]-48);
    }
    if(sum1==sum2){b2=1;}
    if(b1&&b2)return 1;
    return 0;

}

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,sum=0;
    cin>>n;
    vector<string>st1,st2;
    loop(i,1,n){
        string s;
        cin>>s;
        if(s.size()&1)
        st1.push_back(s);
        else{
            st2.push_back(s);
        }
    }
    sum=n;
    ll n1=st1.size(),n2=st2.size();
    for(ll i=0;i<n1;i++){
        for(ll j=0;j<n1;j++){
            if(i==j)continue;
            string s1=st1[i]+st1[j];  
            //cout<<"L"<<s1<<endl;        
            if(check(s1)){
                sum++;
                //cout<<st1[i]<<" "<<st1[j]<<" \n";
            }
            //cout<<"s"<<sum<<endl;
        }
    }
    for(ll i=0;i<n2;i++){
        for(ll j=0;j<n2;j++){
            if(i==j)continue;
            string s2=st2[i]+st2[j];  
            //cout<<"L"<<s1<<endl;        
            if(check(s2)){
                sum++;
                //cout<<st1[i]<<" "<<st1[j]<<" \n";
            }
            //cout<<"s"<<sum<<endl;
        }
    }
    cout<<sum;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}