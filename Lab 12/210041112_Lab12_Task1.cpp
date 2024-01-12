#include<bits/stdc++.h>
using namespace std;

template <class T>
void bubbleSort(T *array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                T temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

template <class T>
T amax(T *array, int size, int n) {
    // A.S
     bubbleSort(array, size);

    return array[size-n];
}

int main() {
    int intArray[] = {5, 2, 9, 1, 7};
    int intSize = sizeof(intArray) / sizeof(int);
    int nthLargestInt = amax(intArray, intSize, 1);
    cout << "1st largest element in intArray: " << nthLargestInt << endl;

    double doubleArray[] = {3.14, 1.0, 2.71, 0.5};
    int doubleSize = sizeof(doubleArray) / sizeof(double);
    double nthLargestDouble = amax(doubleArray, doubleSize, 2);
    cout << "2nd largest element in doubleArray: " << nthLargestDouble << endl;

    float floatArray[] = {2.5f, 1.0f, 3.7f, 0.8f};
    int floatSize = sizeof(floatArray) / sizeof(float);
    float nthLargestFloat = amax(floatArray, floatSize, 3);
    cout << "3rd largest element in floatArray: " << nthLargestFloat << endl;

    return 0;
}
