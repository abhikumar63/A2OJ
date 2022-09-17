#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin>>s;
	int n = s.size();
	int cnt1 = 0;
	int cnt2 = 0;
	int cnt3 = 0;
	for(int i=0;i<n;i+=2){
		if(s[i] == '1')
			cnt1++;
		else if(s[i] == '2')
			cnt2++;
		else
			cnt3++;
	}
	string ans;
	for(int i=0;i<n;i++){
		if(i%2 == 0){
			if(cnt1 > 0){
				ans += '1';
				cnt1--;
			}
			else if(cnt2 > 0){
				ans += '2';
				cnt2--;
			}
			else if(cnt3 > 0){
				ans += '3';
				cnt3--;
			}
		}
		else
			ans += '+';
	}
	cout<<ans;
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