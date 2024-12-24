#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    int i, x;
    cin >> x;
    long long int n, s;
    for (i=0;i<x;i++)
    {
        cin>>n>>s;
        if (n%s==0)
            cout <<"0"<< endl;
        else
            cout <<s-(n%s)<< endl;
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