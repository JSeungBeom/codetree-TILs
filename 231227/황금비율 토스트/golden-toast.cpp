#include <bits/stdc++.h>

using namespace std;

int n, m;

string s;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	cin >> s;
	char c;
	list<char> l;
	
	for (int i = 0; i < s.length(); i++) {
		l.push_back(s[i]);
	}
	
	auto it = l.end();

	for (int i = 0; i < m; i++) {
		cin >> c;

		switch (c) {
			case 'L':
				if (it == l.begin())
					break;

				it--;
				break;

			case 'R':
				if (it == l.end())
					break;
				it++;
				break;

			case 'D':
				if (it == l.end())
					break;
				it = l.erase(it);
				break;

			case 'P':
				cin >> c;
				it = l.insert(it, c); it++;
				break;

		}
	}

	for (auto a : l) {
		cout << a;
	}
}