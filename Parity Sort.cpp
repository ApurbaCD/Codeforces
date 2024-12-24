#include<bits/stdc++.h>
using namespace std;
void ans(){
    vector<int>v1,v2;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v1.push_back(x);
        v2.push_back(x);

    }
    bool b1=true;
    sort(v1.begin(),v1.end());
    for(int i=0;i<n;i++){
        if(v1[i]%2==0){
            if(v2[i]%2!=0){
                b1=false;
                break;
            }
        }
        else{
             if(v2[i]%2==0){
                b1=false;
                break;
            }
        }
    }
if(b1){
    cout<<"YES"<<"\n";

}
else{
    cout<<"NO"<<"\n";
}
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){

    ans();

    }
}