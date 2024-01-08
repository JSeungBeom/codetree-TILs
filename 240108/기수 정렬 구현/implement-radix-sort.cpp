#include <bits/stdc++.h>

using namespace std;

int n;
int arr[100005];
int d = 6;
int p10[6];

int digitNum(int x, int a) {
    return (x / p10[a]) % 10;
}

vector<int> l[10];

int main() {

    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    p10[0] = 1;

    for (int i = 1; i < d; i++)
        p10[i] = p10[i - 1] * 10;

    for (int i = 0; i < d; i++) {
        for (int j = 0; j < 10; j++) l[j].clear();
        for (int j = 0; j < n; j++) {
            l[digitNum(arr[j], i)].push_back(arr[j]);

            int aidx = 0;
            for (int j = 0; j < 10; j++) {
                for (auto x : l[j]) arr[aidx++] = x;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
}