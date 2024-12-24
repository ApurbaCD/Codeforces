#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
int n;
string s,s1,k;
cin>>n;
for(int i=0; i<n; i++){cin>>k;s1+=k;}
s=s1;
reverse(s.begin(),s.end());
if(s==s1)cout<<"YES";
else cout<<"NO";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
   // cin>>t;
    while(t--){
        ans();
    }
}