#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n\n");

    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        printf("%d  X %d = %d\n", n, i, n * i);
    }
    
    return 0;
}