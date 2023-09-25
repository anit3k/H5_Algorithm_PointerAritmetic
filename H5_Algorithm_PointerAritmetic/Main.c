#include <stdio.h>

int main() {
	int numbers[] = { 6, 66, 666, 6666, 66666 }; // declare array of numbers
	int* pointer = numbers; // declare and set point to index zero

    // Calculate the length of the array
    size_t length = sizeof(numbers) / sizeof(numbers[0]);

    for (size_t i = 0; i < length; i++) {
        printf("Element %zu: %d\n", i, pointer[i]);
        printf("Element %zu: %d\n", i, *(pointer + i));
    }

    return 0;
}