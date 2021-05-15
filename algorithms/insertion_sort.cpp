#include <iostream>

void insertion_sort(int array[], int len) {
    for (int i = 1;i < len;i++) {
        int tmp = array[i], j = i;
        while (j > 0 && array[j - 1] > tmp) {
            array[j] = array[--j];
        }
        array[j] = tmp;
    }
}

int main() {
    int test_array[] = {3, 6, 23, -1, 54};
    size_t len = sizeof(test_array) / sizeof(test_array[0]);

    insertion_sort(test_array, len);

    for (int i : test_array)
        std::cout << i << " ";

    return 0;
}