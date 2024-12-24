#include<bits/stdc++.h>
using namespace std;
#define ll                long long int 
#define ull               unsigned long long int 
//#define vec             vector<int>
//copy from Mrinal da
#define vec               vector<ll>
#define vsort(v)          (v.begin(),v.end())
#define endline           cout<<"\n"
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define loop(i,a,b)       for(ll i=a;i<=b;i++)
#define loop1(i,a,b)      for(ll i=a;i>=b;i--)



void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
	int n,m,k;
	cin>>n>>m>>k;
	string a,b,c;
	cin>>a>>b;
	// sort(a,a+n);
	sort(a.begin(),a.end());
	// sort(b,b+m);
	sort(b.begin(),b.end());
    int ai=0,bi=0,tmp1=0,tmp2=0;
    while((ai<n)&&(bi<m)){
		//cout<<a[ai]<<" "<<b[bi]<<endl;
         if(((a[ai]<b[bi])&&(tmp1!=k))||(tmp2==k)){
			c=c+a[ai];
			ai++;
			tmp1++;
			tmp2=0;
			}
		 else{
			c=c+b[bi];
			bi++;
			tmp2++;
			tmp1=0;
		 }
		 //cout<<c<<endl;
	}
	loop(i,0,c.size()-1){
		cout<<c[i];
	}
	endline;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}