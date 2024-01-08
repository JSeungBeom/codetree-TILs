#include <iostream>

int n;
int arr[100005];
int set[10][100005];


int main() {
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for(int i = 0; i < n; i++)
     cout << arr[i] << ' ';
}