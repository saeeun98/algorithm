#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) return a.first < b.first;
	else
		return a.second < b.second;
}
int main(void) {
	int n;
	cin >> n;
	vector<pair<int, int>> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a.begin(), a.end(), comp);

	int savetime = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		if (savetime <= a[i].first) {
			savetime = a[i].second;
			ans++;
		}
	}

	cout << ans;
}