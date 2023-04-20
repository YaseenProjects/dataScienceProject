#include <iostream>

using namespace std;

int binary_search(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // target not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    int index = binary_search(arr, n, target);
    if (index != -1)
        cout << "Target found at index " << index << endl;
    else
        cout << "Target not found" << endl;
    return 0;
}
