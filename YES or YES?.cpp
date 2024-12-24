#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s;
    cin >> s;
    if((s[0]=='Y' || s[0]=='y') && (s[1]=='e'||s[1]=='E') && (s[2]=='S'||s[2]=='s'))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}