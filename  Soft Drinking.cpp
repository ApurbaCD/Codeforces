#include<bits/stdc++.h>
using namespace std;

void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n, k, l, c, d, p, n1, np;
    cin >> n >> k >> l >> c >> d >> p >> n1 >> np;
    int drink = k*l;
    int cd = c*d;
    int salt = p/np;
    int drink_n = drink / n1;
    int mn = min(drink_n, cd);
    int mn1 = min(mn, salt);
    int tmp =mn1/n;
    cout << tmp << endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}