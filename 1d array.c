#include <stdio.h>

int main() {
    
    int i;
	int arr[5] = {1, 2, 3, 4, 5};

    
    for(i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}
