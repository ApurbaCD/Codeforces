#include<bits/stdc++.h>
using namespace std;
int ar[1001],br[1001],c[1001];
void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        ar[i]=a;
        br[i]=b;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((ar[i]==br[j])&&(i!=j)){
                // cout<<sum<<endl;;
                // cout<<i<<" "<<j<<endl;;
                sum++;
                break;
            }
        }
        
    }
    sum=n-sum;
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