#include <iostream>
using namespace std;

// Function for Binary Search
void binarySearch(int arr[], int size, int value) {
    int left = 0;
    int right = size - 1;
    bool found = false;

    while (left <= right) {
        int mid = (left + right) / 2; // find middle index

        if (arr[mid] == value) {
            cout << "? Element found at index " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < value) {
            left = mid + 1; // search right half
        }
        else {
            right = mid - 1; // search left half
        }
    }

    if (!found)
        cout << "? Element not found!" << endl;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);

    int value;
    cout << "Enter the value to search: ";
    cin >> value;

    binarySearch(arr, size, value);

    return 0;
}

