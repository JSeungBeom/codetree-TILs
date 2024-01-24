#include <bits/stdc++.h>

using namespace std;

queue<int> q;
int n, k;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	while (!q.empty()) {
		for (int i = 1; i < k; i++) {
			q.push(q.front());
			q.pop();
		}

		cout << q.front() << ' ';
		q.pop();
	}
}