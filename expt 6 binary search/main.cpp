#include <iostream>
using namespace std;

int binSearch(int arr[], int low, int high, int x) {
    if (low > high)
        return -1;
    
    int mid = (low + high) / 2;
    
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return binSearch(arr, low, mid - 1, x);
    else
        return binSearch(arr, mid + 1, high, x);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int x = 60;
    
    int result = binSearch(arr, 0, n - 1, x);
    
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
