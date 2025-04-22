#include <iostream>
#include <vector>
using namespace std;

class LinearProbingHashTable {
private:
    vector<int> table;
    int size;

public:
    LinearProbingHashTable(int hashSize) : size(hashSize) {
        table.resize(size, -1);
    }

    int hashFunction(int key) {
        return key % size;
    }

    void insert(int key) {
        int index = hashFunction(key);
        while (table[index] != -1) {
            if (table[index] == key) {
                return; // Duplicate, do not insert
            }
            index = (index + 1) % size; // Linear probing
        }
        table[index] = key;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            if (table[i] != -1) {
                cout << "Index " << i << ": " << table[i] << endl;
            } else {
                cout << "Index " << i << ": Empty" << endl;
            }
        }
    }
};

int main() {
    int hashSize;
    cout << "Enter hash table size: ";
    cin >> hashSize;
    
    LinearProbingHashTable hashTable(hashSize);
    
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        hashTable.insert(element);
    }

    cout << "Hash Table:" << endl;
    hashTable.display();

    return 0;
}
