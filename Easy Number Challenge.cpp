#include<bits/stdc++.h>
using namespace std;
long long mx=1073741824;
long long seive(long long n ){
    long long tmp=1;
    for(long long i=2;i*i<=n;i++){
        long long t=0;
        while(n%i==0){
            t++;
            n/=i;
        } 
        tmp*=(t+1);
    }
    if(n>1){
        tmp*=2;
    }
    return tmp;
}
void ans(){
    long long a,b,c;
    long long sum=0;
    cin>>a>>b>>c;
    for(long long i=1;i<=a;i++){
        for(long long j=1;j<=b;j++){
            for(long long k=1;k<=c;k++){
                long long tmp=i*j*k;
                sum+=seive(tmp);
                sum=sum%mx;
                //cout<<sum<<" "<<tmp<<endl;;
            }
        }
    }
    cout<<sum<<endl;
    //cout<<seive(9)<<endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    long long t=1;
    while(t--){
        ans();
    }
}