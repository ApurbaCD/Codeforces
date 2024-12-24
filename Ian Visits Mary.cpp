#include<bits/stdc++.h>
using namespace std;
int GCD(int v1,int v2){
    return gcd(v1,v2);

}
int  ans(int a,int b){
     if(GCD(a,b-1)==1){
         cout<<2<<"\n"<<a<<" "<<b-1<<"\n";
         cout<<a<<" "<<b<<"\n";

         return 0;
     }
     if(GCD(a,b+1)==1){
         cout<<2<<"\n"<<a<<" "<<b+1<<"\n";
         cout<<a<<" "<<b<<"\n";

         return 0;
     }
     if(GCD(a-1,b)==1){
         cout<<2<<"\n"<<a-1<<" "<<b<<"\n";
        cout<<a<<" "<<b<<"\n";

         return 0;
     }
     if(GCD(a+1,b)==1){
         cout<<2<<"\n"<<a+1<<" "<<b<<"\n";
         cout<<a<<" "<<b<<"\n";
         return 0;
     }
     if(GCD(a+1,b+1)==1){
         cout<<2<<"\n"<<a+1<<" "<<b+1<<"\n";
         cout<<a<<" "<<b<<"\n";
         return 0;
     }
     if(GCD(a-1,b-1)==1){
         cout<<2<<"\n"<<a-1<<" "<<b-1<<"\n";
         cout<<a<<" "<<b<<"\n";
         return 0;
     }
     if(GCD(a+1,b-1)==1){
         cout<<2<<"\n"<<a+1<<" "<<b-1<<"\n";
         cout<<a<<" "<<b<<"\n";
         return 0;
     }
    if(GCD(a-1,b+1)){
        cout<<2<<"\n"<<a-1<<" "<<b+1<<"\n";
        cout<<a<<" "<<b<<"\n";
        return 0;
    }
    return -1;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int k=gcd(n,m);
        if(k==1){
            cout<<1<<"\n"<<n<<" "<<m<<"\n";
        }
        else{
        ans(n,m);
        }
    }
}