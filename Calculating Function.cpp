#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    long long int num;
    cin>>num;
    if(num%2==0){
        cout<<num/2;
    }else{
        cout<<((num/2)+1)*(-1);
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