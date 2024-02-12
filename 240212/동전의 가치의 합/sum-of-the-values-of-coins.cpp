#include <iostream>
#define MAX 0x7f7f7f7f
using namespace std;

int arr[4] = { 1, 2, 5, 7 };
int n;
int dp[100005];

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        dp[i] = MAX;
        for (int j = 0; j < 4; j++) {
            if (i >= arr[j]) {
                dp[i] = min(dp[i], dp[i - arr[j]] + 1);
            }
        }
    }

    cout << dp[n];

    return 0;
}