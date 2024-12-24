#include<bits/stdc++.h>
using namespace std;
int a[40];
void ans(){
    // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,k,sum=-1;
    for(int i=0;i<40;i++){
        a[i]=0;
    }
    string s;
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<n;i++){
        a[s[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(a[i]&1)sum++;
    }
    if(sum>k)cout<<"NO\n";
    else cout<<"YES\n";
    
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}