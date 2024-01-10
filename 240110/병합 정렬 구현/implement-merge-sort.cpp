#include <bits/stdc++.h>

using namespace std;

int n;
int arr[100005];

void merge(int st, int mid, int en);

void merge_sort(int st, int en){
	if (st < en) {
		int mid = (st + en) / 2;
		merge_sort(st, mid);
		merge_sort(mid + 1, en);
		merge(st, mid, en);
	}
}

void merge(int st, int mid, int en) {
	int i = st;
	int j = mid + 1;
	int k = st;
	int merged_arr[100005];

	while (i <= mid && j <= en) {
		if (arr[i] < arr[j]) {
			merged_arr[k++] = arr[i++];
		}
		else {
			merged_arr[k++] = arr[j++];
		}
	}

	while (i <= mid) {
		merged_arr[k++] = arr[i++];
	}

	while (j <= en) {
		merged_arr[k++] = arr[j++];
	}

	for (int i = st; i <= en; i++) {
		arr[i] = merged_arr[i];
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	merge_sort(0, n - 1);

	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
}