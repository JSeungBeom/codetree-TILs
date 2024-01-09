#include <bits/stdc++.h>

using namespace std;

vector<int> arr;
int n;

int extract_digit(int idx, int k) {
	if (k == 0)
		return arr[idx] % (10 * (k + 1));
	else
		return (arr[idx] % (10 * (k + 1))) / (10 * k);
}

void radix_sort(int k) {
	for (int pos = 0; pos < k; pos++) {
		vector<int> arr_new[10];
		for (int i = 0; i < arr.size(); i++) {
			int digit = extract_digit(i, pos);
			arr_new[digit].push_back(arr[i]);
		}

		vector<int> store_arr;

		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < arr_new[i].size(); j++) {
				store_arr.push_back(arr_new[i][j]);
			}
		}
		
		arr = store_arr;
	}
	
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	int num;

	for (int i = 0; i < n; i++) {
		cin >> num;

		arr.push_back(num);
	}
	radix_sort(6);

	for (int e : arr)
		cout << e << ' ';


}