#include<iostream>
using namespace std;

int ans(){
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        if( a[i][j]=='.'){
            int tb=0,tw=0;
            if(i+1<n){
                 if(a[i+1][j]=='B')tb++;
                   if(a[i+1][j]=='W')tw++;
             }
             if(j-1>=0){
                 if(a[i][j-1]=='B')tb++;
                 if(a[i][j-1]=='W')tw++;
             }
             if(i-1>=0){
                 if(a[i-1][j]=='B')tb++;
                 if(a[i-1][j]=='W')tw++;
             }
             if(j+1<m){
                 if(a[i][j+1]=='B')tb++;
                 if(a[i][j+1]=='W')tw++;
             }
            if(tb==0){
                a[i][j]='B';                                                 
            }
            else if((tb!=0)&&(tw==0)){
                a[i][j]='W';
            }

        }
        else continue;
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j];
    }
    cout<<"\n";
    }
    return 0;
}

int main(){
    int t;
    t=1;
    while(t--){
        ans();

    }
}