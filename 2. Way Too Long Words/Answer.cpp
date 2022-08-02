#include<bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
 
	int t;
	cin>>t;
	//int ca = 1;
	while(t-- > 0){
		string str;
		cin>>str;
		if(str.length() <= 10){
			cout<<str<<"\n";
		}
		else{
			cout<<str[0]<<str.length()-2<<str[str.length()-1]<<"\n";
		}
	}
	return 0;
}