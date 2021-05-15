#include <iostream>

using namespace std;

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void selection_sort(int array[], int len) {
    for (int i = 0;i < len - 1;i++) {
        int min = i; // index of minimum
        for (int j = i + 1;j < len;j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        swap(&array[i], &array[min]);
    }
}

int main() {
    int test_array[] = {3, 6, 23, -1, 54};
    size_t len = sizeof(test_array) / sizeof(test_array[0]);

    selection_sort(test_array, len);

    for (int i : test_array)
        cout << i << " ";

    return 0;
}