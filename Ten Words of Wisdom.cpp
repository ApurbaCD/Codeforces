#include<iostream>
using namespace std;
int ans(){
    int n,res=0,maxq=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int w,q;
        cin>>w>>q;
        if(w<=10){
            if(maxq<q){
                res=i+1;
                maxq=q;
            }
        }
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<ans()<<"\n";

    }
}