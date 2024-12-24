#include<bits/stdc++.h>
using namespace std;
#define ll long long 
vector<ll>mp;
void ans(){
   ll n,h,h1,x,sum=0,r=2,b=1,sum1=0,sum2=0;
   cin>>n>>h;
   h1=h;
   mp.clear();
   for(ll i=0;i<n;i++){
       cin>>x;
       mp.push_back(x);
   }
   sort(mp.begin(),mp.end());
   for(ll i=0;i<n;i++){
       if(mp[i]<h){
        ll tmp=mp[i];
        sum++;
        h+=tmp/2;
        //cout<<h<<endl;
       }
      // cout<<h<<endl;
       else if (r>0){
        h=h*2;
        r--;
        i--;
        //cout<<"r"<<h<<endl;
        continue;
       }
       else if(b>0){
        h=h*3;
        b--;
        i--;
        //cout<<"b"<<h<<endl;
        continue;
       }
       else break;
   }
   r=2;b=1;
   h=h1;
      for(ll i=0;i<n;i++){
       if(mp[i]<h){
        ll tmp=mp[i];
        sum1++;
        h+=tmp/2;
        //cout<<h<<endl;
       }
      // cout<<h<<endl;
        else if(b>0){
        h=h*3;
        b--;
        i--;
        //cout<<"b"<<h<<endl;
        continue;
       }
       else if (r>0){
        h=h*2;
        r--;
        i--;
        //cout<<"r"<<h<<endl;
        continue;
       }
       else break;
   }
   r=2;b=1;
   h=h1;
      for(ll i=0;i<n;i++){
       if(mp[i]<h){
        ll tmp=mp[i];
        sum2++;
        h+=tmp/2;
        //cout<<h<<endl;
       }
      // cout<<h<<endl;
       else if (r==2){
        h=h*2;
        r--;
        i--;
        //cout<<"r"<<h<<endl;
        continue;
       }
        else if(b==1){
        h=h*3;
        b--;
        i--;
        //cout<<"b"<<h<<endl;
        continue;
       }
       else if(r==1){
        h=h*2;
        r--;
        i--;
        //cout<<"b"<<h<<endl;
        continue;
       }
       else break;
   }
   cout<<max(max(sum1,sum),sum2)<<"\n";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ans();
    }
}