#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n) {
    int last = arr[0];
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = last;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    leftRotate(arr, n);

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}