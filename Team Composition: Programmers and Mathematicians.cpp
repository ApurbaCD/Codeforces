#include<iostream>
using namespace std;
void ans(){
   int a,b,sum=0;
   cin>>a>>b;
   if(a==b){
        sum=sum+a/2;
        cout<<sum<<"\n";
        return;
    }
    if(a<b)
    swap(a,b);
   while((a>0)&&(b>0)){
    if(b/2>=a/3){
        int tmp=b/2;
        sum=b/2+sum;
        a=a-tmp*2;
        b=b-tmp*2;
    }
    else{
        if(a/3<=b){
        int tmp=a/3;
        sum = tmp+sum;
        a=a-tmp*3;
        b=b-tmp;   
        }
        else{
        int tmp=b;
        sum=tmp+sum;
        a=a-tmp*3;
        b=b-tmp;
        }
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