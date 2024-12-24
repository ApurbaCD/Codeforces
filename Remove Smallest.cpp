#include<bits/stdc++.h>
using namespace std;
int i,n,p,t,a[60];
void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
        cin>>n;
        for(i=0;i++<n;)
            cin>>a[i];
        sort(a,a+i);
        for(i=p=0;++i<n;){
            if(a[i]+1<a[i+1])p++;
            }
            if(p)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}