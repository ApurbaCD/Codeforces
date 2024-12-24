#include<bits/stdc++.h>
using namespace std;
void ans(){
    int n,x,mn,mx,k;
    bool b1=true,b2=true;
    cin>>n;
    vector<int>v1;
    vector<bool>v2;
    for(int i=0;i<n;i++){
        cin>>x;
        v1.push_back(x);
    }
    v2.push_back(1);
    mn=mx=v1[0];
    for(int i=1;i<n;i++){
        if((v1[i]>=mx)&&(b1)){
            v2.push_back(1);
            mx=v1[i];
            //cout<<i<<" a"<<endl;
            continue;
        }
        else if((v1[i]<v1[i-1])&&(b1)&&(v1[i]<=v1[0])){
            v2.push_back(1);
            //cout<<i<<" b"<<endl;
            mn=v1[i];
            b1=false;
        }
        else if(!b1){
            if((v1[i]<=v1[0])&&(mn<=v1[i])){
                 v2.push_back(1);
                 //cout<<i<<" c"<<endl;
                 mn=v1[i];
            }
            else{
                //cout<<i<<" d"<<endl;
                v2.push_back(0);
            }
        }
        else{
            v2.push_back(0);
        }
    }
    for(int i=0;i<n;i++){
        cout<<v2[i];
    }
    cout<<"\n";
}

int main(){
  //ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){

        ans();
    }
}