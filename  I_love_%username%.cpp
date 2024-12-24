#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,tmp,point,sum=0,mx,mn;
    cin>>n;
    cin>>tmp;
    mx=mn=tmp;
    for(int i=1;i<n;i++){
        cin>>point;
        if(point>mx){
            sum++;
            mx=point;continue;
        }
        if(point<mn){
            sum++;
            mn=point;
        }
    }
    cout<<sum;

}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}