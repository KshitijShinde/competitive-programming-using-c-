#include <iostream>
#include <vector>
#include <list>
using namespace std;

class HashTable {
private:
	vector<list<int>> table;
	int size;

	int hash(int key) {
		return key % size;
	}
public:
	HashTable(int tableSize) {
		size = tableSize;
		table.resize(size);
	}

	void insert(int value) {
		int index = hash(value);
		table[index].push_back(value);
	}

	void display() {
		for (int i = 0; i < size; i++) {
			cout << "LL " << i << ": ";
			for (int val : table[i]) {
				cout << val << " ";
			}
			cout << endl;
		}
	}
};

void insertArrayIntoHashTable(HashTable &hashTable, const vector<int> &arr) {
	for (int value : arr) {
		hashTable.insert(value);
	}
}

int main() {
	vector<int> arr = {23, 44, 15, 8, 12, 54, 7, 33, 61};
	int tableSize = 7;
	HashTable hashTable(tableSize);
	insertArrayIntoHashTable(hashTable, arr);
	hashTable.display();
	return 0;
}
