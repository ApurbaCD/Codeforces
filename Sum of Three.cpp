#include<bits/stdc++.h>
using namespace std;
void ans(){
    int n,a=1,b=2,c;
    cin>>n;
    c=n-1-2;
    bool b1=false;
    for(int i=0;i<n;i++){
        if(c<=1)break;
        if(b==c){
            b++;c--;
            continue;
        }
        if(b+a+c>n)break;
        if((b%3!=0)&&(c%3!=0)&&(a!=b)&&(b!=c)&&(a!=c)){
            //cout<<a<<b<<c;
            //if(a==c)break;
            b1=true;
            break;
        }
        c--;
        b++;
    }

        if(!b1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n"<<a<<" "<<b<<" "<<c<<"\n";
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