#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
      int s;
    int i, n, m;
    int count = 0;
    cin >> s;
    for (i = 0; i < s; i++)
    {
        cin >> n >> m;
 
        if (m - n >= 2)
        {
            count++;
        }
    }
 
    cout << count << endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}