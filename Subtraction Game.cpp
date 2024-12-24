#include<bits/stdc++.h>
using namespace std;
void ans(){
    int a,b;
    cin>>a>>b;
    if(a>1){
        cout<<1<<"\n";
        return;
    }
    if((a==1)&&(b==2)){

    cout<<3<<"\n";
    return ;

    }
    if(a==1){

    cout<<2<<"\n";
    }
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){

        ans();
    }
}