#include<bits/stdc++.h>
using namespace std;

void ans(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    int m;
  cin >> m;
 
  if (m >= 9000)
    cout << "9012";
  else
  {
    int f=0,g;
    set<int>s;
    for (int i = m + 1; i <= 9000; i++)
    {
      int n = i;
 
      set<int> s;
      int cnt = 0;
      while (n > 0)
      {
        int r = n % 10;
        n = n / 10;
        s.insert(r);
        cnt++;
      }
      if (s.size() == cnt)
      {
       f=1;
       g=i;
        break;
      }
    }
    if(f) cout<<g;
    else cout<<"9012";
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