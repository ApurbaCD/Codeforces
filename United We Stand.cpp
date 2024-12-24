#include<bits/stdc++.h>
using namespace std;
void ans(){
    int n;
    cin>>n;
    vector<int>v1,v2,v3;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);

    }
    sort(v1.begin(),v1.end());
    if(v1[0]==v1[n-1]){
        cout<<-1<<"\n";
    }
    else{
        //cout<<n-1<<" "<<1<<"\n";
        for(int i=0;i<n;i++){
            if(v1[i]==v1[n-1]){
               v2.push_back(v1[i]);
            }
            else{
                v3.push_back(v1[i]);
            }
        }
         cout<<v3.size()<<" "<<v2.size()<<"\n";
         for(int i=0;i<v3.size();i++){
            cout<<v3[i]<<" ";
         }
         cout<<"\n";
         for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
         }
         cout<<"\n";
    
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