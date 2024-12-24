#include<bits/stdc++.h>
using namespace std;
void ans(){
    int n,sum=0;
    cin>>n;
    string s;
    vector<string>v;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
        //cout<<v[i][0]<<" ";
    }
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++){
            //cout<<v[i][j]<<" ";
            int a=v[i][j];int b=v[n-j-1][i]; int c= v[j][n-i-1];int d=v[n-i-1][n-j-1];
             int tmp = (max(max(c,d),max(a,b)));
            // char c[4]={(char)v[i][j],v[i][n-j-1],v[n-i-1][j],v[n-i-1][n-j-1]};
            //cout<<v[i][j]<<" ";
            sum+=(4*tmp)-(a+b+c+d);
            //cout<<tmp<<" "<<sum<<endl;
        }
        //cout<<endl;
        
    }
    cout<<sum/2<<"\n";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}