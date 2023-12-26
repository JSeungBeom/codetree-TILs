#include <bits/stdc++.h>

using namespace std;

int n;
string s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	list<int> l;

	cin >> n;

	while (n--) {
		cin >> s;

		int q;

		if (s == "push_back") {
			cin >> q;
			l.push_back(q);
		}
		else if (s == "push_front") {
			cin >> q;
			l.push_front(q);
		}
		else if (s == "pop_front") {
			cout << l.front() << '\n';
			l.pop_front();
		}
		else if (s == "pop_back") {
			cout << l.back() << '\n';
			l.pop_back();
		}
		else if (s == "size") {
			cout << l.size() << '\n';
		}
		else if (s == "empty") {
			cout << l.empty() << '\n';
		}
		else if (s == "front") {
			cout << l.front() << '\n';
		}
		else if (s == "back") {
			cout << l.back() << '\n';
		}
	}
}