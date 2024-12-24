#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,x,sum=0,count=0,mx=INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x){
            count++;
            sum--;
        }
        else{
            sum++;
        }
        if(sum>mx)mx=sum;
        if(sum<0){
            sum=0;
        }
    }
    cout<<count+mx;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}