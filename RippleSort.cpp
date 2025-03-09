#include <iostream>
#include <vector>
using namespace std;

void rippleSort(vector<int>& arr) {
    int n = arr.size();
    
    // Outer loop controlling the size of the unsorted sublist
    for (int size = n; size > 1; size--) {
        // Inner loop to simulate the "ripple" effect
        for (int i = 0; i < size - 1; i++) {
            // Compare adjacent elements and swap if they are in the wrong order
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {5, 3, 8, 6, 2, 7};
    
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    rippleSort(arr);
    
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
