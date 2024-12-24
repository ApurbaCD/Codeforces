#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,n,fr[100]={0},k=0;
    cin>>n;
    string sq;
    cin>>sq;
    for(i=1;i<n;i++){
        if(sq[i]!=sq[i-1])
            fr[(int)sq[i-1]]++;
 
    }
    fr[(int)sq[n-1]]++;
    for(i=65;i<=90;i++){
        if(fr[i]>1){
            k++;
            break;
        }
    }
    if(k!=0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}