#include <iostream>
#include <unordered_set>

using namespace std;

bool isSubset(int* arr1, int* arr2, int size1, int size2) {
    unordered_set<int> set1;

    // Add all elements of arr1 to set1
    for (int i = 0; i < size1; i++) {
        set1.insert(arr1[i]);
    }

    // Check if all elements of arr2 are present in set1
    for (int i = 0; i < size2; i++) {
        if (set1.find(arr2[i]) == set1.end()) {
            return false;
        }
    }

    return true;
}

int main() {
    int arr1[] = { 9,4,7,1,-2,6,5 };
    int arr2[] = { 7,1,-2 };
    int size1 = 7;
    int size2 = 3;

    if (isSubset(arr1, arr2, size1, size2)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

}
