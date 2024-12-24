#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    vector<int> v;
    
    const int r = 1670;
 
    for(int i = 1; i < r; i++){
        if(i%3 == 0 || i%10 == 3){
            continue;
        }
        v.push_back(i);
    }
    while(t--){
        int tmp;
        cin>>tmp;
       cout<<v[tmp-1]<<endl;
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