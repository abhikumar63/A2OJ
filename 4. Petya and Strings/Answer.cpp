#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int n = s1.size();
	transform(s1.begin(),s1.end(),s1.begin(),::tolower);
	transform(s2.begin(),s2.end(),s2.begin(),::tolower);
	int flag = 0;
	for(int i=0;i<n;i++){
		if(s1[i] > s2[i]){
			flag = 1;
			break;
		}
		if(s1[i] < s2[i]){
			flag = -1;
			break;
		}
	}
	cout<<flag;
}
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
		solve();
		cout<<"\n";
	}
	return 0;
}