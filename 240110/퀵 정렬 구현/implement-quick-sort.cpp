#include <bits/stdc++.h>

using namespace std;

int n;
int arr[100005];

int partition(int st, int en) {
	int pivot = arr[en];
	int i = st - 1;

	for (int j = st; j < en; j++) {
		if (arr[j] < pivot) {
			swap(arr[++i], arr[j]);
		}
	}

	swap(arr[i + 1], arr[en]);

	return i + 1;
}

void quick_sort(int st, int en) {
	if (st < en) {
		int pos = partition(st, en);

		quick_sort(st, pos - 1);
		quick_sort(pos + 1, en);
	}
}


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	quick_sort(0, n - 1);

	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
}