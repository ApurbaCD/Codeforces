#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n,s1=0,s2=0,x;
  bool b1=false,b2=false;
  string s;
  cin>>n;
  int a[n],b[n];
  cin>>s;
  n=n*2;
  for(int i=0;i<n;i++){
    x=s[i]-48;
    if(i<(n/2)){
        a[i]=x;
        s1+=a[i];
        continue;
    }
    b[(i-(n/2))]=x;
    s2+=x;
    //cout<<x<<" ";
  }
  sort(a,a+(n/2));
  sort(b,b+(n/2));
  if(s1==s2){
    cout<<"NO";
    return;
  }
  for(int i=0;i<n/2;i++){
   // cout<<"KJHG"<<a[i]<<" "<<b[i]<<endl;
    if(a[i]>b[i]){
        b1=true;
        //cout<<"K";
    }
    else if(a[i]<b[i]){
        b2=true;
        //cout<<"kl";
    }
    else {
        //cout<<"J";
       // cout<<a[i]<<" "<<b[i]<<endl;
        b1=b2=true;
        break;
    }

  }
  if(b1&&b2){
    cout<<"NO";
    return;
  }
  cout<<"YES";
   //cout<<s<<endl;
  //cout<<s1<<" "<<s2;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        ans();
    }
}