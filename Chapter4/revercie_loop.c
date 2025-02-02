#include <stdio.h>

int main() {
    int z;

    printf("Enter a number: ");
    scanf("%d", &z);    

    if (z > 0) {
        for (int i = z; i >= 0; i--) {  
            printf("%d ", i);
        }
    } else {
        printf("Please enter a positive number.\n");
    }

    printf("\n"); // Adds a newline for clean output

    return 0;
}
