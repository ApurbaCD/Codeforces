#include<bits/stdc++.h>
using namespace std;
int  ans(){
    vector<int> v1;

    int n,m,k,h,val=0;
    cin>>n>>m>>k>>h;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(abs(h-x));
        if(abs(h-x)!=0){
        if((abs(x-h)%k==0)&&(((m-1)*k)>=abs(x-h))){
            val++;
        }
        }
    }
    return val;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){

        cout<<ans()<<"\n";
    }
}