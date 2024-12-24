#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		//cout<<"LK";
		int k=(int)s[i]-96;
		//cout<<k<<endl;
		if((k>=1)&&(k<=26)){
			int l=27-k+96;
			//cout<<l<<endl;
			s[i]=(char)l;
			cout<<s[i];
		}
		else{
			cout<<" ";
		}
	}
	//cout<<s<<endl;
	//(vull korso mia"v"hobe)part for your personal use my dear best friend
	//kzig,uli,blfi,kvihlmzo,fhu(vull korso mia"v"hobe),nb,wvzi,yvhg,uirvmw
}