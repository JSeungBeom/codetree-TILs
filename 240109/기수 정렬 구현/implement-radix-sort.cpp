#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;


int extractDigit(int num, int pos) {
    while (pos > 0) {
        num /= 10;
        pos--;
    }
    return num % 10;
}
void radixSort(vector<int>& arr, int k) {
    for (int pos = 0; pos < k; pos++) {
        vector<int> arr_new[10];
        for (int i = 0; i < arr.size(); i++) {
            int digit = extractDigit(arr[i], pos);
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

int main() {
    int n, num;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }
    int maxDigits = 0;
    for (int i = 0; i < arr.size(); i++) {
        int num = arr[i];
        int digits = 0;
        while (num > 0) {
            num /= 10;
            digits++;
        }
        maxDigits = max(maxDigits, digits);
    }

        radixSort(arr, maxDigits);

        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
}