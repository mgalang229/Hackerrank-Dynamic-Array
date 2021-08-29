#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, q;
	cin >> n >> q;
	vector<vector<int>> a(n);
	int last_answer = 0;
	// simply follow the instructions in the problem statement
	vector<int> res;
	for (int i = 0; i < q; i++) {
		int type, x, y;
		cin >> type >> x >> y;
		int idx = ((x ^ last_answer) % n);
		if (type == 1) {
			a[idx].push_back(y);
		} else {
			last_answer = a[idx][y % (int) a[idx].size()];
			res.push_back(last_answer);
		}
	}
	for (auto x : res) {
		cout << x << '\n';
	}
	return 0;
}
