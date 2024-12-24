#include<bits/stdc++.h>
using namespace std;
int a[101];
void ans(){
    int n,c,x,sum=0;
    cin>>n>>c;
    for(int i=0;i<101;i++){
        a[i]=0;
    }
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    for(int i=1;i<101;i++){
        if(a[i]>c){
            sum=sum+c;
            continue;
        }
        sum=sum+a[i];
    }
    cout<<sum<<"\n";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){

        ans();
    }
}