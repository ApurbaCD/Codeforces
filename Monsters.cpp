#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// bool cmp(pair<int, int> a, pair<int, int> b)
// {
//     if (a.first > b.first)  return 1;
//     else if (a.first == b.first)
//     {
//         if (a.second < b.second) return 1;
//         else return 0;
//     }
//     else return 0;
// }
void ans(){

    vector<int>v1;
    vector<pair<int,int>>vpi;
    ll n,k;
    cin>>n>>k;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x%k==0){
            x=k;
            cout<<i+1<<" ";
        }
        else{
            vpi.push_back({x%k,i+1});
        }
       
    }
    sort(vpi.begin(),vpi.end());
    for(auto x:vpi){
        cout<<x.second<<" ";
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