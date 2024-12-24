#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
        string s;
        cin>>s;
        for(int i=0;i<s.size()-1;i+=2){
            cout<<s[i];
        }
       cout<<s[s.size()-1]<<endl;

}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}