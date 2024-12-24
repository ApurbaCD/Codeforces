#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  vector <int> ans;
        long long  n,m=10;
        cin>>n;
        while(n){
            long long  x=n%m;
            if(x){
                    ans.push_back(x);
                    n-=x;
                    //cout<<n<<endl;
                }
            else {
                m*=10;
            }
        }
        cout<<ans.size()<<endl;
        for(long long  i=0;i<ans.size();i++){
                cout<<ans[i]<<" "; 
            }
        cout<<endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}