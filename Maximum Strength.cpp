#include<bits/stdc++.h>
using namespace std;

int tr(string s1,string s2){
    int l=s1.length(),tmp=-1,sum=0;
    for(int i=0;i<l;i++){
    if(s1[i]<s2[i]){
       tmp=i;
       sum=sum+s2[i]-s1[i];
       break;
    }
    }
    if(tmp==-1){
    cout<<0<<"\n";
    return 0;
    }

    sum=sum+(l-tmp-1)*9;
    cout<<sum<<"\n";
    return 0;


}

void ans(){
    string s2,s1,s;
    cin>>s1>>s2;
    if(s1.length()<s2.length()){
        int l=s2.length()-s1.length();
        for(int i=0;i<l;i++){
            s=s+'0';
        }
        s1=s+s1;
    }
    if(s1.length()>s2.length()){
        int l=s1.length()-s2.length();
        for(int i=0;i<l;i++){
            s=s+'0';
        }
        s2=s+s2;
    }
    //cout<<s1<<" "<<s2<<endl;;
    tr(s1,s2);
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}