#include <bits/stdc++.h>

using namespace std;

int n;
int arr[105];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int mn = min_element(arr + i, arr + n) - arr;

        int tmp = arr[i];
        arr[i] = arr[mn];
        arr[mn] = tmp;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}