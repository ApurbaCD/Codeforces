#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,a,b,n1;
    bool b1=false;
    cin>>a>>b>>n;
    n1=a*10;
    for(int i=0;i<10;i++){
        if((n1+i)%b==0){
            //cout<<n1+i<<" "<<b<<endl;
            b1=true;
            n1=n1+i;
            break;
        }
    }
    if(!b1){
        cout<<-1;return;
    }
    cout<<n1;
    for(int i=1;i<n;i++){
        cout<<0;
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