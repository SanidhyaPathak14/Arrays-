#include <iostream>
using namespace std;

int main() {
    int n, d;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number of places to rotate: ";
    cin >> d;

    d = d % n;   // Important if d > n

    int temp[n];

    // Step 1: Copy elements from index d to n-1
    int k = 0;
    for(int i = d; i < n; i++) {
        temp[k++] = arr[i];
    }

    // Step 2: Copy first d elements to the end
    for(int i = 0; i < d; i++) {
        temp[k++] = arr[i];
    }

    // Step 3: Copy temp back to original array
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    cout << "Array after left rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
