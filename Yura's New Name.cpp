#include<bits/stdc++.h>
using namespace std;
int ans(){
    string s;
    cin>>s;
    int l=s.size(),val=0;
    for(int i=0;i<l;i++){
        if(s[i]=='^'){
            if((s[i+1]=='-')&&(s[i+2]=='^')){
                i=i+1;

            }
            else if(s[i+1]=='^'){
                i++;
            }
            else{
                i++;
                val++;
            }
        }
        else if(s[i]=='_'){
            val++;
        }
    }
    return val;
}

int main(){
  //ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
       
        cout<< ans()<<"\n";
    }
}