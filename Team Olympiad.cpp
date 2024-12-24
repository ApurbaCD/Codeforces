#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j,n,m,k,x,y,p,q,r,t;
    p=q=r=1;
    cin>>n;
    int a[n],a1[4]={0};
    for(i=1;i<=n;i++){   
  		cin>>a[i];a1[a[i]]++;
  	}
  	x=min(a1[1],min(a1[2],a1[3]));
  	cout<<x<<"\n";
  for(i=1;i<=x;i++){   
  		for(;p<=n;p++) {
  			if(a[p]==1){ 
                cout<<p<<" ";
                 p++;
                 break;
                 }
  		}
  		for(;q<=n;q++) {
  			if(a[q]==2){ 
                cout<<q<<" "; 
                q++;
                break;
                }
  		}
  		for(;r<=n;r++) {
  			if(a[r]==3){ 
                cout<<r<<" "; 
                r++;
                break;
                }
  		}
     cout<<"\n";
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