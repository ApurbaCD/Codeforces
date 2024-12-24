#include<bits/stdc++.h>
using namespace std;

void ans(){
 // freopen("input.txt","r",stdin);
 // freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int a[n],max=0,index,min=101,tmp;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>max){
                max=a[i];
                index=i;
            }
            if(a[i]<=min){
                min=a[i];
                tmp=i;
            }
     }
     if(index>tmp)
         tmp++;
       int k=index+(n-1)-tmp;
        cout<<k<<endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1 ;
    //cin>>t;
    while(t--){
        ans();
    }
}