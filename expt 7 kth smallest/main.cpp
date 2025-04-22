#include <iostream>
#include <vector>
#include <algorithm>  // For sorting
using namespace std;

int findKthSmallest(vector<int>& arr, int k) {
    // Sort the array in ascending order
    sort(arr.begin(), arr.end());

    // Return the Kth smallest element (remember to subtract 1 for 0-based indexing)
    return arr[k - 1];
}

int main() {
    vector<int> arr = {12, 3, 5, 7, 19, 2};
    int k = 3;  // Find the 3rd smallest element

    cout << "The " << k << "th smallest element is: " << findKthSmallest(arr, k) << endl;

    return 0;
}
