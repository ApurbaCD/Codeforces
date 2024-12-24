#include<bits/stdc++.h>
using namespace std;
void ans(){
    long long  n,m;
    bool b=0;
    long long sum=0;
    cin>>n>>m;
    for(int i=0;i<40;i++){
        if(n<m){
            sum+=n;
            n=n*2;
        }
        else{
            n=n%m;
            if(n==0){
                b=1;
                break;
            }
        }
    }
    if(b){
        cout<<sum<<"\n";
    }
    else{
        cout<<-1<<"\n";
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