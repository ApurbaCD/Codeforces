#include<bits/stdc++.h>
using namespace std;
void ans(){
    int i=0,s1=0,s2=0,s3=0,s4=0,s5=0;
    string j;
    for(int i1=0;i1<10;i1++){
        cin>>j;
        for(int j1=0;j1<10;j1++){
            //cout<<j[j1]<<" ";
            if(j[j1]=='X'){
            if(i1==0||j1==0||i1==9||j1==9){
               s1++;
            }
            else if(i1==1||j1==1||i1==8||j1==8){
               s2++;
            }
            else if(i1==2||j1==2||i1==7||j1==7){
               s3++;
            }
            else if(i1==3||j1==3||i1==6||j1==6){
               s4++;
            }
            else if(i1==4||j1==4||i1==5||j1==5){
               s5++;
            }
        }
       }
    }
    //cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<endl;
    i=(s1*1)+(s2*2)+(s3*3)+(s4*4)+(s5*5);
    cout<<i<<"\n";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans();
    }
}