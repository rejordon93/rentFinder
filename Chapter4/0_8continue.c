#include <stdio.h>

int main() {
    for(int i = 0; i < 7; i++){
        if (i == 3)
        {
            printf("Test %d\n", i);
            continue;
        }
        
        printf("The value of i is %d\n", i);
    }
    return 0;
}