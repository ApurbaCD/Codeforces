#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p=0,p1=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            p=i;
            break;
        }
    }
    for(int i=n-1;i>0;i--){
        if(a[i]<a[i-1]){
            p1=i;
            break;
        }
    }
    reverse(a.begin()+p,a.begin()+p1+1);
    if(is_sorted(a.begin(),a.end())){
        cout<<"yes\n"<<p+1<<" "<<p1+1;
    }
    else{
        cout<<"no";
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