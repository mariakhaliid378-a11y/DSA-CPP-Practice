#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 7, 89, 23};
    int size = 5;

    int maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    cout << "Largest element: " << arr[maxIndex] << endl;
    cout << "Index: " << maxIndex << endl;

    return 0;
}
