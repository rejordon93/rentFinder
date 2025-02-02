#include <stdio.h>

int main() {
    int n;
    int i;

    printf("Enter a Natural Number \n");
    scanf("%d", &n);

    if(n <= 0){
          printf("Not a Natural Number! Please enter a positive integer.\n");
          return 1;
    }

    printf("Natural Number up to %d:\n", n);
    for (i = 0; i <= n; i++)
    {
      printf("%d\n", i);
       
    }
    
    return 0;
}