#include <iostream>

class EnhancedArray {
private:
    int *arrayptr;
    int size;

public:
    // Non-parametric constructor
    EnhancedArray() {
        size = 10;
        arrayptr = new int[size];
    }

    // Parametric constructor
    EnhancedArray(int sz) {
        size = sz;
        arrayptr = new int[size];
    }

    // Destructor
    ~EnhancedArray() {
        delete[] arrayptr;
    }

    // setAt function
    int setAt(int index, int data) {
        if (index >= 0 && index < size) {
            arrayptr[index] = data;
            return 1;
        } else {
            return 0;
        }
    }

    // getAt function
    int getAt(int index) const {
        if (index >= 0 && index < size) {
            return arrayptr[index];
        } else {
            return 0;
        }
    }

    // getSize function
    int getSize() const {
        return size;
    }
};

int main() {
    EnhancedArray arr1;
    EnhancedArray arr2(20);

    std::cout << "Size of arr1: " << arr1.getSize() << std::endl;
    std::cout << "Size of arr2: " << arr2.getSize() << std::endl;

    arr1.setAt(5, 100);
    std::cout << "Value at index 5 in arr1: " << arr1.getAt(5) << std::endl;

    arr2.setAt(10, 200);
    std::cout << "Value at index 10 in arr2: " << arr2.getAt(10) << std::endl;

    return 0;
}