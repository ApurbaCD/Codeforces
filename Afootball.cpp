#include<bits/stdc++.h>
using namespace std;
int ans(){
    int one =0,zero=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            zero++;
            one=0;
        }
        else if(s[i]=='1'){
            one++;
            zero=0;
        }
        if((zero>6)||(one>6)){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;

}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);

        ans();
}