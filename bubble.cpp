#include <iostream>
#include <vector>
using namespace std;

// Bubble sort function
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    
    // Outer loop for multiple passes
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;  // Flag to track if any swap was made
        
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap if elements are in the wrong order
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        // If no elements were swapped, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

// Function to display the array
void displayArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Original array: ";
    displayArray(arr);
    
    bubbleSort(arr);  // Sort the array
    
    cout << "Sorted array: ";
    displayArray(arr);
    
    return 0;
}
