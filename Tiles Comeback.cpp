#include<bits/stdc++.h>
using namespace std;
void ans(){
    int s1=0,s2=0,n,k,f=0,e=0,x,sum=0;
    int a,z;
    bool b1=true,b2=true;
    vector<int>v1;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        v1.push_back(x);
    }
    if(k==1){
        cout<<"YES\n";

        return;
    }
    a=v1[0];z=v1[n-1];
    if(a==z){
    for(int i=0;i<n;i++){
        if(a==v1[i]){
            sum++;
        }
    } 
    if(sum>=k){
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";

    }
    // sum=0;
    else{
        for(int i=0;i<n;i++){
        if(a==v1[i]){
            s1++;
            if((s1%k==0)&&(b1)){
                f=i;
                b1=false;
            }
        }
    }
        for(int i=n-1;i>=0;i--){
        if(z==v1[i]){
            s2++;
            if((s2%k==0)&&(b2)&&(i>=f)){
                e=i;
                b2=false;
            }
        }
    }
    if((!b1)&&(!b2))
    cout<<"YES\n";
    else
    cout<<"NO\n";
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