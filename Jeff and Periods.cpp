#include<bits/stdc++.h>
using namespace std;
int x=1e5,y;

int  ans (int per){
    int n,total=0;
    cin>>n;
    vector<int>v[x+1];
    if(per==0){
    for(int i=0;i<n;i++){
        cin>>y;
        v[y].push_back(i+1);
    }
    }

    for(int i=1;i<=x;i++){
        int l=v[i].size(),yes=0;
        if(l>0){
            if(l==1){
                total++;
            }
            else{
                int diff=v[i][1]-v[i][0];yes=0;
                for(int j=0;j<l-1;j++){
                    if(v[i][j+1] - v[i][j]!=diff){
                        yes=1;
                        break;
                    }
                }
                if(yes!=1){
                    total++;
                }
            }
        }
        }
    
     cout<<total<<"\n";
     for(int i=1;i<=x;i++){
        int l=v[i].size(),yes=0;
        if(l>0){
            if(l==1){
                cout<<i<<" "<<0<<"\n";
                total++;
            }
            else{
                int diff=v[i][1]-v[i][0];yes=0;
                for(int j=0;j<l-1;j++){
                    if(v[i][j+1] - v[i][j]!=diff){
                        yes=1;
                        break;
                    }
                }
                if(yes!=1){
                cout<<i<<" "<<diff<<"\n";
                    total++;
                }
            }
        }
        }
return 0;
}

int main(){
    int t=1,total;
    while(t--){
        total=ans(0);
    }
}