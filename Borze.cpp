#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s;
    cin>>s;
 
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '.'){
            cout<<"0";
        }
        if(s[i]== '-'){
            if(s[i+1] == '.'){
                cout<<"1";
                i++;
            }
            else{
                cout<<"2";
                i++;
            }
        }
    }
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}