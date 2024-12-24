#include<bits/stdc++.h>
using namespace std;
int  ans(){
    string s;
    cin>>s;
    bool b1=true;
    long long int l=s.length(),count=0,mx=0,f=0;
    if((l==1)&&(s[0]=='1')){
        cout<<1<<"\n";
        return 0;
    }
    for(int i=0;i<l;i++){
        //cout<<i<<" "<<s[i]<<endl;
        if(s[i]=='1'){
            count++;
        }
        if((i==l-1)&&(s[i]=='1')){
            i=-1;
           // cout<<"LK"<<endl;
            b1=false;
            
        }
        if(s[i]=='0'){
           // cout<<count<<endl;
            mx=max(mx,count);
            count=0;
        }
        if((b1==false)&&(s[i]=='0')){
            break;
        }
        if(count==l)break;
        
    }
    mx=max(mx,count);
    if(mx==l){
        cout<<mx*mx<<"\n";
        return 0;
    }
    //cout<<mx<<endl;
    long long int k=1;
    for(int i=mx;i>0;i--){
        long long int sum=i*k;
        k++;
        f=max(f,sum);
    }
    cout<<f<<"\n";
    return 0;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){

        ans();
    }
}