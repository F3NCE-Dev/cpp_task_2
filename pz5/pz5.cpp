#include <iostream>

void doubleElements(int*& arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size;

    std::cout << "Enter the size of the dynamic array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Size must be greater than 0!" << std::endl;
        return 1;
    }

    int* myArray = new int[size];

    std::cout << "Enter " << size << " elements:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Element [" << i << "]: ";
        std::cin >> myArray[i];
    }

    std::cout << "\nOriginal array: ";
    printArray(myArray, size);

    doubleElements(myArray, size);

    std::cout << "Array after doubling: ";
    printArray(myArray, size);

    delete[] myArray;
    myArray = nullptr;

    return 0;
}