//PES1UG25AM095
#include <stdio.h>
#include <stdlib.h>

int main() {
    int size,new_size;
    int *malloc_array, *calloc_array;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    malloc_array = (int*)malloc(size * sizeof(int));
    calloc_array = (int*)calloc(size, sizeof(int));

    printf("Enter %d elements for malloc array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &malloc_array[i]);
    }

    printf("Elements stored in malloc array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", malloc_array[i]);
    }
    printf("\n");

    printf("Elements stored in calloc array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", calloc_array[i]);
    }
    printf("\n");

    printf("Enter new size for realloc: ");
    scanf("%d", &new_size);

    malloc_array = (int*)realloc(malloc_array, new_size * sizeof(int));

    printf("Enter %d elements after realloc:\n", new_size);
    for (int i = 0; i < new_size; i++) {
        scanf("%d", &malloc_array[i]);
    }

    printf("Elements after realloc:\n");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", malloc_array\
            [i]);
    }
    printf("\n");

    free(malloc_array);
    free(calloc_array);

    printf("Memory freed successfully.\n");

    return 0;
}