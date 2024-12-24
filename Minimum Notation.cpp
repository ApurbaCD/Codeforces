#include<bits/stdc++.h>
using namespace std;
int v1[10];
int v2[10];
vector<int>v[10];
void ans(){
    
    v->clear();
    int k=0;
    string s;
    cin>>s;
    for(int i=0;i<10;i++){
        v1[i]=0;
        v[i].clear();
    }
    int l=s.size(),index=-1;
    for(int i=0;i<l;i++){
        int tmp = (int)s[i]-48;
        v[tmp].push_back(i);
        //cout<<v[tmp][0]<<endl;
    }
    for(int i=0;i<10;i++){
         bool b=false;
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]>=k)
            v1[i]++;
            for(int m=k;m<(v[i][j]);m++){
                //cout<<i<<" "<<k<<"lk\n";
                 k=v[i][j]+1;
                 if(((int)s[m]-48)>i){
                 v1[(min(((int)s[m]+1-48),9))]++;
                 //cout<<(min(((int)s[m]+1-48),9))<<"LK\n";
                 }
            }
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<v1[i];j++){
            cout<<i;
        }
        //cout<<i<<" "<<v1[i]<<endl;
    }
    cout<<"\n";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){

        ans();
    }
}