#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a,a+4);
   //cout<<a[0]<<a[1]<<a[2]<<a[3];
     if(a[0]+a[1]+a[2]==a[3]){
        cout<<"YES";
    }

    else if(a[0]+a[1]==a[2]+a[3])
    {
        cout<<"YES";
    }
    else if(a[0]+a[2]==a[1]+a[3]){
        cout<<"YES";
    }
    else if(a[0]+a[3]==a[1]+a[2]){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
   
}