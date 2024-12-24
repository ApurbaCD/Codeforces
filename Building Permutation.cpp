#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  long long n,x,sum1=0,sum2=0;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
  }
  sort(v.begin(),v.end());
  for(int i=1;i<=n;i++){
    sum1+=max(v[i-1],i)-min(v[i-1],i);
  }
  cout<<sum1;

}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        ans();
    }
}