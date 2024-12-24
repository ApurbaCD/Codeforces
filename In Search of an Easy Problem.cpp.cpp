#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
      int n;
    cin>>n;
    int A[n];
    int c=0;
    
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]==1)
        {
            c++;
        }
    }
    if(c>0)
    {
        cout<<"HARD";
    }
    else
    {
        cout<<"EASY";
    }
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1 ;
   // cin>>t;
    while(t--){
        ans();
    }
}