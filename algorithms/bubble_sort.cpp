#include <iostream>

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void bubble_sort(int array[], int len) {
    for (int i = 0;i < len-1;i++) {
        for (int j = 0;j < len - i - 1;j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

int main() {
    int test_array[] = {3, 6, 23, -1, 54};
    size_t len = sizeof(test_array) / sizeof(test_array[0]);

    bubble_sort(test_array, len);

    for (int i : test_array)
        std::cout << i << " ";

    return 0;
}