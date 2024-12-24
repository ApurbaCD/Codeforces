#include<bits/stdc++.h>
using namespace std;
int  ans(){
    int n,n1,f1,f2;
    bool b=false;
    cin>>n1;
    if(n1<0){
        b=true;
    }
    else{
        cout<<n1;
        return 0;
    }
    n1=abs (n1);
    n=n1;
    f1=n%10;
    n/=10;
    f2=n%10;
    n/=10;
    //cout<<f1<<f2;
    //cout<<n;
    if(n!=0){
    if(f1>f2){
        cout<<"-"<<n<<f2;
    }
    else{
        cout<<"-"<<n<<f1;
    }
    }
    else{
        if(min(f1,f2)!=0){
        cout<<"-"<<min(f1,f2);
        return 0;
        }
        cout<<0;
    }

  return 0;  
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;

    ans();
}