#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    int l;
    cin>>l;
    string s;
    cin>>s;
    set<char>a;
    
 
    for(int i=0; i<l; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 'a' - 'A';
            a.insert(s[i]);
    }
    if(a.size()==26)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
   // cin>>t;
    while(t--){
        ans();
    }
}