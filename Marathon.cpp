#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
      int a,array[3];
        cin>>a>>array[0]>>array[1]>>array[2];
 
        int c=0 ;
 
        for(int i=0 ; i<3 ; i++){
            if(array[i]>a) { c++; }
        }
 
        cout<<c<<endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}