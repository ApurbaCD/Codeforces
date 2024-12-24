#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000];
void ans(){
   int  n,s1=0,s2=0,sa=0,sb=0,sAll=0;
   cin>>n;
   a[101],b[n];
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    b[i]=x;
    a[x]++;
   }
   for(int i=0;i<=100;i++){
    if(a[i]==1)s1++;
    if(a[i]==2)s2++;
    if(a[i]>2)sAll++;
   }
   //cout<<s1<<" "<<s2<<" "<<sAll;
   if(s1&1){
    if(sAll>0){
        cout<<"YES\n";
        bool b1=true,b2=true;
        for(int i=0;i<n;i++){
            if(a[b[i]]==1){
              if(b1){
                cout<<"A";
                b1=false;
              }
              else if(!b1){
                cout<<"B";
                b1=true;      
              }
            }
            if(a[b[i]]>1){
                if(a[b[i]]>2&&b2){
                    cout<<"B";
                    b2=false;
                }
                else{
                    cout<<"A";
                }
            }
        }
    }
    else{
        cout<<"NO\n";
    }
   }
   else if(!(s1&1)){
    cout<<"YES\n";
     bool b1=true,b2=true;
        for(int i=0;i<n;i++){
            int x=b[i];
            if(a[x]==1){
              if(b1){
                cout<<"A";
                b1=false;
              }
              else if(!b1){
                cout<<"B";
                b1=true;      
              }
            }
            else{
                cout<<"A";
            }
        }
   }
   for(int i=0;i<n;i++){
      //cout<<a[b[i]]<<" ";
   // cout<<s1<<" ";
   }

}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    t=1;
    while(t--){
        ans();
    }
}