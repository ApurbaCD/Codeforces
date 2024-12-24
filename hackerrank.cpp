#include<bits/stdc++.h>
using namespace std;

void ans(){
//   freopen("input.txt","r",stdin);
//   freopen("output.txt","w",stdout);
    int m1,m2,d;
    cin>>m1>>m2>>d;
    cout<<(d-((m1*d)/(m1+m2)))<<"\n"; 
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}