#include <iostream>
#include <vector>
using namespace std;

void findIntersection(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0;

    // Loop through both arrays
    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            cout << arr1[i] << " "; // Print the intersection element
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++; // Move pointer in arr1
        }
        else {
            j++; // Move pointer in arr2
        }
    }
}

int main() {
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {3, 4, 5, 6};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Intersection of the two arrays: ";
    findIntersection(arr1, arr2, n, m);
    cout << endl;

    return 0;
}
