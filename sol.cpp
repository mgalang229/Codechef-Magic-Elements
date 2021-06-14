#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			// calculate the sum of all the numbers
			sum += a[i];
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			// remove the current element temporarily by subtracting 'a[i]' from 'sum'
			// to get the sum of all the elements without the current element
			long long temp = sum - a[i];
			// check if the sum 'a[i]' (current element) and 'k' is STRICTLY greater than 'temp'
			if (a[i] + k > temp) {
				// if yes, then increment 'cnt'
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
