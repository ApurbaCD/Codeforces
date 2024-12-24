#include<bits/stdc++.h>
using namespace std;
void ans(){
  int l,r,a,b;
  cin>>l>>r;
//   if(r<=3){
//      cout<<-1<<"\n";
//      return;
//   }
//   if(l>3){
//     if(l%2==0){
//     cout<<l/2<<" "<<l/2<<"\n";
//     return;
//     }
//     else{
//         if(l+1<=r){
//             cout<<(l+1)/2<<" "<<(l+1)/2<<"\n";
//             return;
//         }
//     }
//   }
  for(int i=l;i<=r;i++){
      for(int j=2;j*j<=i;j++){
        if(i%j==0){
            cout<<j<<" "<<i-j<<"\n";
            return;
        }
      }
  } 
  cout<<-1<<endl;
  

}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}