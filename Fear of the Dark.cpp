#include<bits/stdc++.h>
using namespace std;
void ans(){
    double bp,ap,ob,oa,ab,d6;
    double ax,ay,bx,by,px,py;
    cin>>px>>py>>ax>>ay>>bx>>by;
    bp=sqrt(((px-bx)*(px-bx))+((py-by)*(py-by)));
    ap=sqrt(((px-ax)*(px-ax))+((py-ay)*(py-ay)));
    oa=sqrt(((ax)*(ax))+(ay*ay));
    ob=sqrt(((bx)*(bx))+(by*by));
    ab=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
    cout << setprecision(11);
    if(bp<=ap){
        if(ob<=oa){
            cout<<max(bp,ob)<<endl;
        }
        else{
            double tmp1=max(bp,oa);
            double tmp2=ab/2;
            cout<<max(tmp1,tmp2)<<"\n";
        }
    }
    if(ap<bp){
        if(oa<ob){
            cout<<max(ap,oa)<<endl;
        }
        else{
            double tmp1=max(ap,ob);
            double tmp2=ab/2;
            cout<<max(tmp1,tmp2)<<"\n";
            // cout<<max(ap,ob)<<"\n";
        }
    }
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){

        ans();
    }
}