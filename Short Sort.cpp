#include<bits/stdc++.h>
using namespace std;
void ans(){
    int sum=0;
    string s,s1;
    s1="abc";
    cin>>s;
   if(s[0]!=s1[0])sum++;
   if(s[1]!=s1[1])sum++;
   if(s[2]!=s1[2])sum++;
   if(sum>2)cout<<"NO\n";
   else cout<<"YES\n";

}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}