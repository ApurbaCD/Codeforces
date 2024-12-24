#include<bits/stdc++.h>
using namespace std;
int a=0,b=0,c=0,n,x;
bool b1=true;
void check(int tmp){
    if(tmp==25){
        a++;
        return;
    }
    else if(tmp==50){
        if(a>0){
            a--;
            b++;
        }
        else{
            b1=false;
            return;
        }
    }
    else{
        
        if(a>0&&b>0){
            c++;
            a--;
            b--;
        }
        else if(a>2){
            c++;
            a-=3;
        }
        else{
            b1=false;
            return;
        }
    }
}

void ans(){
 // freopen("input.txt","r",stdin);
 // freopen("output.txt","w",stdout);
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        check(x);
    }
    if(b1)
    cout<<"YES";
    else
    cout<<"NO";
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        ans();
    }
}