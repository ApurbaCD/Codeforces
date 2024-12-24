#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int b,r,d,s;
	cin>>b>>r;
	d=min(b,r);
	s=(b+r-d*2)/2;
	cout<<d<<" "<<s;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}