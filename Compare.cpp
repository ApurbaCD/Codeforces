#include<bits/stdc++.h>
using namespace std;
void ans(){
    long long int n,num=0,sum=0;
    bool b1=false,b2=false,b3=false;
    cin>>n;
    vector<long long int>v1;
    for(int i=0;i<n;i++){
        int x;
          cin>>x;
        v1.push_back(x);
      
        if(x<0){
           
           if(b2==false){
            num++;
            b2=true;
           }
        }
        if(x>0){
            b2=false;
        }
        sum=sum+abs(x);

    }
     
    cout<<sum<<" "<<num<<"\n";

}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){

        ans();
    }
}