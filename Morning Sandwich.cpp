#include<bits/stdc++.h>
using namespace std;
void ans(){
    int b,c,h,sum=0;
    cin>>b>>c>>h;
    sum=c+h;
    if(b>=sum+1){
        cout<<(sum*2)+1<<"\n";
    }
    else{
        cout<<(b*2)-1<<"\n";
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