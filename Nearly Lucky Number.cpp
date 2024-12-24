#include<bits/stdc++.h>
using namespace std;

void ans(){
//   freopen("input.txt","r",stdin);
//   freopen("output.txt","w",stdout);
	long long int n;
	cin>>n;
	int count=0;
	while(n!=0)
	{
		if(n%10==4 || n%10==7)
		{
			count++;
		}
		n=n/10;
	}
	if(count==4 || count==7)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}