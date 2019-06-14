#include <bits/stdc++.h>

using namespace std;

int main () {

	int N;
	cin >> N;

	vector<int> a(N);
	vector<int> b(N);
	vector<int> c(N);

	for (int i = 0; i < N; i++) {
		cin >> a[i] >> b[i] >> c[i];
	}

	for (int i = 1; i < N; i++) {

		a[i] += max(b[i - 1], c[i - 1]);
		b[i] += max(c[i - 1], a[i - 1]);
		c[i] += max(a[i - 1], b[i - 1]);

	}

	cout << max(a[N - 1], max(b[N - 1], c[N - 1])) << endl;

}
