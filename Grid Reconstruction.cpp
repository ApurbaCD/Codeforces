#include<bits/stdc++.h>
using namespace std;
void ans(){
    int n,x,y;
    cin>>n;
    x=1;y=(2*n)-1;
    vector<int>v1,v2;
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<y<<" ";
            y-=2;
        }
        else{
            cout<<x<<" ";
            x+=2;
        }
    }
    x=2;
    y=2*n-2;
    cout<<"\n";

        for(int i=0;i<n-1;i++){
        if(i%2==1){
            cout<<y<<" ";
            y-=2;
        }
        else{
            cout<<x<<" ";
            x+=2;
        }
    }
    cout<<2*n<<" ";
    
    cout<<"\n";

}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){

        ans();
    }
}