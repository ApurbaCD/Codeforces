#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,b,n,t;
	cin>>t;	
	for(int i=1;i<=t;i++){
		cin>>n;a=0;b=0;
		for(int j=0;j<3;j++){
            a+=n%10;
            n=n/10;
        }
  for(int j=0;j<3;j++){
     b+=n%10;
     n=n/10;
  }
  if(a==b)
	   printf("YES\n");
  else
    printf("NO\n");
 }
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}