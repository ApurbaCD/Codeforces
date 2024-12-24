#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
        int n;
        cin>>n;
        int a[n];
        int ind;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++){
            if(count(a,a+n,a[i])==1){
                ind=i;
                break;
            }
        }
        cout<<ind+1<<endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}