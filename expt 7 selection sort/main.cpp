#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    // Loop through each element in the array
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // Assume the current element is the smallest

        // Find the smallest element in the remaining unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Update the index of the smallest element
            }
        }

        // Swap the found minimum element with the first element
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Get the size of the array

    cout << "Original array: ";
    printArray(arr, n);  // Print the array before sorting
    
    selectionSort(arr, n);  // Sort the array using Selection Sort
    
    cout << "Sorted array: ";
    printArray(arr, n);  // Print the array after sorting
    
    return 0;
}
