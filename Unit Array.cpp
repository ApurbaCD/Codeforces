#include<bits/stdc++.h>
using namespace std;
void ans(){
    int n,neg=0,sum=0,pos=0;
    cin>>n;
    vector<int>v1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
        if(x==-1)neg++;
        else pos++;
    }
   if(neg>pos){
    int tmp=neg-pos;
    if(tmp%2==1){
        sum++;
    }
    sum=sum+(tmp/2);
    if(((neg%2==0)&&(sum%2==1))||((neg%2==1)&&(sum%2==0))){
        sum++;
    }
   }
   else{
    if(neg%2==1){
        sum++;
    }
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