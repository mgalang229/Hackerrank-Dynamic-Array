#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, q;
	cin >> n >> q;
	vector<int> a[n];
	vector<int> ans;
	int l=0;
	for(int i=0; i<q; ++i) {
		int t, x, y;
		cin >> t >> x >> y;
		int idx=(x^l)%n;
		if(t==1)
			a[idx].push_back(y);
		else {
			l=a[idx][y%(int)a[idx].size()];
			ans.push_back(l);
		}
	}
	for(auto x : ans)
		cout << x << "\n";
}
