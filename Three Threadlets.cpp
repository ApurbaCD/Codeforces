#include<bits/stdc++.h>
using namespace std;
vector<int>v1;
bool equal(){
    for(int i=1;i<v1.size();i++){
        if(v1[i-1]!=v1[i])return 0;
    }
    return 1;
}
void ans(){
    v1.clear();
   int a;
   bool b1=0;
   for(int i=0;i<3;i++){
    cin>>a;
    v1.push_back(a);
   }
   sort(v1.begin(),v1.end());
   
   if(equal()){
    cout<<"YES\n";
    return;
   }
   for(int i=0;i<3;i++){
       int tmp=v1[v1.size()-1];
       v1.pop_back();
       int tmp1=tmp-v1[0];
       int tmp2=v1[0];
       v1.push_back(tmp1);
       v1.push_back(tmp2);
       if(equal()){
        b1=1;
        break;
       }
       sort(v1.begin(),v1.end());
   }
   if(b1){
    cout<<"YES\n";
   }
   else{
    cout<<"NO\n";
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