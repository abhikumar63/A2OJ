#include<bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
 
	int t = 1;
	//cin>>t;
	//int ca = 1;
	while(t-- > 0){
		string s;
		cin>>s;
		int i=0;
		string ans;
		while(i<s.size()){
			if(s[i]>=65 && s[i]<=90){
				if(s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'Y'){
					ans += '.';
					ans += 32 + s[i];
				}
			}
			else{
				if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
					ans += '.';
					ans += s[i];
				}
			}
			i++;
		}
		cout<<ans;
	}
	return 0;
}