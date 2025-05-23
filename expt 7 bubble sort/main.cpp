#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) { // Comparing adjacent elements
                swap(v[j], v[j + 1]); // Swapping if in the wrong order
            }
        }
    }
}

int main() {
    vector<int> v = {5, 1, 4, 2, 8};
    bubbleSort(v);
    
    for (int i : v)
        cout << i << " ";

    return 0;
}
