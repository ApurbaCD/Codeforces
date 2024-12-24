#include<iostream>
using namespace std;
void ans(){
      int a,b,c;
    cin>>a>>b>>c;
    int sum=0; sum=a+b+c;
    if(sum-a>=10){
        cout<<"YES"<<endl;
    }
    else if(sum-b>=10){
        cout<<"YES"<<endl;
    }
    else if(sum-c>=10){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }  
}
int main(){
  int t;
  cin>>t;
  while(t--){
    ans();
  }
}